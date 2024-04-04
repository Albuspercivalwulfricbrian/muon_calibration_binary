
#ifndef DATA_FORMAT
#define DATA_FORMAT
#include <iostream>
#include <cstdint>
// #include <string>
// #include <sstream>
// #include "constants.h"
#include <vector>
#include <array>
#include <TTree.h>
#include <TFile.h>
// #include <algorithm>
#include "ctime"
// #include "time_left.h"
#include "string.h"
#include "ADCHeaderStructs.h"
#include "ChannelEntry.h"

#define WORD_SIZE       4           // 4 bytes
// #define SYNC_WORD_TIME  0x72617453//0x3f60b8a8  // ADC64
#define SYNC_WORD       0x2a50d5af  // ADC64 (Old) & TQDC2
#define SYNC_WORD_ADC64 0x2a50d5af // ADC64 (New)
#define THREAD_NUMBER 8
using namespace std;


// class ChannelEntry {

//     public:
//     uint16_t wf_size;
//     std::vector<int16_t> wf;
//     // std::array<int16_t,2048> wf; 
//     void ResetEntry()
//     {
//       wf_size = 0;
//       // for (int i = 0; i < 2048; i++) wf[i] = 0;
//       wf.clear();
//     }
// };

class DataFileReader
{
  private:
  static const int32_t total_channels = 128;
  char fileName[1024];
  uint32_t uiTotalEvents;
  TOTAL_HEADER TotalHeader;
  uint32_t uiEventWithMaxSize = 0;
  ChannelEntry event_waveform;
  std::array<short_energy_ChannelEntry*, total_channels> short_channel_info;
  time_t start_time;
  FILE *fd;
  TFile* RootDataFile = nullptr;
  TTree* RootDataTree = nullptr;
  
  public:
  DataFileReader(const char * Name)
  {
    snprintf(fileName,sizeof(fileName),"%s",Name);

    if ((fd=fopen(strcat(fileName,".data"), "rb")) == NULL)
    {
        printf("Achtung: Open file error or file not found!\n");
    }
    cout << "Starting" << endl;
    RootDataFile = new TFile ((TString)Name+ ".root", "RECREATE");
    RootDataTree = new TTree ("adc64_data","adc64_data");
    for(int ch = 0; ch < total_channels; ch++)
    {
      short_channel_info[ch] = new short_energy_ChannelEntry();
      short_channel_info[ch]->Initialize();
      RootDataTree->Branch((TString::Format("channel_%i", ch+1)).Data(), &short_channel_info[ch]);
    }
    start_time = std::time(nullptr);
  }

  ~DataFileReader()
  {
    RootDataTree->Write();
    RootDataFile->Close();
  };

  void DisplayTimeToCalculate(int32_t EvNum, int32_t total_entries, time_t start_time);
  uint32_t GetTotalEvents(){return uiTotalEvents;}

//   int32_t ReadFile(size_t);
  uint32_t ConsequentialEventsReading();
//   uint32_t FileIndexation();
  uint32_t GetCurrentPosition(){return ftello(fd);}
//   void ResetPosition(){  fseek(fd,0,SEEK_SET);}
};

// ////////////////////
// uint32_t DataFileReader::ConsequentialEventsReading()
// { 
//     TotalHeader.clear();
//   uint32_t uiBuffer[3] = {0,0,0};

//   uiEventWithMaxSize = 0;
//   uint32_t uiMaxSize = 0;

//   fseek(fd,0,SEEK_END);
//   size_t sSizeOfFile = ftell(fd);
//   fseek(fd,0,SEEK_SET);

//   while (!feof(fd))
//   {
//     fread(&(TotalHeader.syncword),WORD_SIZE,1,fd);
//     if ((TotalHeader.syncword) == SYNC_WORD || (TotalHeader.syncword) == SYNC_WORD_ADC64)
//     {
//       uiTotalEvents++;
//       fread(&TotalHeader.EvHeader,sizeof(TotalHeader.EvHeader),1,fd);
//       if (uiMaxSize < TotalHeader.EvHeader.length)
//       {
//         uiMaxSize = TotalHeader.EvHeader.length;
//         uiEventWithMaxSize = uiTotalEvents;
//       }
//       if (TotalHeader.syncword != SYNC_WORD)
//           return -1;

//       const uint32_t BS = (TotalHeader.EvHeader.length/4); // size of event block excluding event header
//       uint32_t uiBuffer[BS];
//       for (int p=0; p<BS; p++) uiBuffer[p] = 0;
//       fread(&uiBuffer, sizeof(uiBuffer),1,fd);
//       ////////////
//       //////////////
//       uint32_t offset = 0;   // in elements of event buffer
//       int32_t  end    = BS;  // remain number of elements (32-bit words)

//       // Read out devices
//       if (uiTotalEvents%10000==0) DisplayTimeToCalculate(ftell(fd)/2052,sSizeOfFile/2052,start_time);

//       while (end > 0)
//       {
//         TotalHeader.DeviceHeader.sn     = uiBuffer[offset];
//         offset++;
//         // For MStream v2.1
//         TotalHeader.DeviceHeader.id     = (uiBuffer[offset] & 0xFF000000)>>24;
//         TotalHeader.DeviceHeader.length = (uiBuffer[offset] & 0x00FFFFFF);
//         offset++;
//         // Read out MStreams
//         while (end > 0)
//         {
//           TotalHeader.ChHeader.ch     = (uiBuffer[offset] & 0xFF000000) >> 24;
//           TotalHeader.ChHeader.length = (uiBuffer[offset] & 0x00FFFFFC)  >> 2;
//           TotalHeader.ChHeader.type   = (uiBuffer[offset] & 0x3);
//           offset++; // skip mstream header
//           uint16_t ch = TotalHeader.ChHeader.ch;
//           event_waveforms[ch].wf.clear(); event_waveforms[ch].ADCID = TotalHeader.DeviceHeader.id;
//           const uint16_t SN = (TotalHeader.ChHeader.length-2)*2;  // Number of samples
//           TotalHeader.SubHeader.wf_tslo = uiBuffer[offset];
//           offset++;
//           TotalHeader.SubHeader.wf_tsup = uiBuffer[offset];
//           offset++;
//           int16_t wave = 0;
//           int32_t polarity = 1;
//           int32_t iSignalOffset = 0;
//           // cout << TotalHeader.ChHeader.ch << " " << TotalHeader.ChHeader.length << " " << TotalHeader.ChHeader.type << endl;
//           if (ch > 128 || SN > 10000 || TotalHeader.ChHeader.type !=1) 
//           {
//               offset += (SN/2);
//               end = BS - offset;
//               if (end < 0) break;
//               continue;
//           }
//           for (int s=0; s<(SN/2); s++)
//           {
//               // cout << "here" << endl;
//               auto ind = offset+s;     // dirrect cycle
//               wave = ((uiBuffer[ind] & 0xFFFF0000) >> 16) * polarity + iSignalOffset;
//               event_waveforms[ch].wf.push_back(wave);
//               wave = (uiBuffer[ind] & 0xFFFF) * polarity + iSignalOffset;
//               event_waveforms[ch].wf.push_back(wave);
//               // event_waveforms[ch].wf[2*s+1];

//               if (event_waveforms[ch].wf.size()%10==0) 
//               {
//                   cout << wave << " ";
//               }
//           }
//           event_waveforms[ch].wf_size = event_waveforms[ch].wf.size();
//           cout << endl;

//           ////////////////
//           event_waveforms[ch].Set_Zero_Level_Area(40);

//           int zero_level = event_waveforms[ch].Get_Zero_Level();
//           // int zl = event_waveforms[ch].CalculateZlwithNoisePeaks(40);
//           int amp = event_waveforms[ch].Get_Amplitude();

//           // //  int zero_level = 27000; event_waveforms[ch].Set_Zero_Level(zero_level);
//           int zl_rms = event_waveforms[ch].Get_Zero_Level_RMS();
//           event_waveforms[ch].SetBoarders(50,400); 
//           int pp = event_waveforms[ch].Get_time();

//           float time = event_waveforms[ch].Get_time_gauss();
//           float charge = event_waveforms[ch].Get_Charge();
//           // short_event_waveforms[ch].II = event_waveforms[ch].GetIntegralInfo();

//           cout << " " << zero_level << " " << amp << " " << charge << " " << event_waveforms[ch].channel << " " << event_waveforms[ch].ADCID <<  endl;
//           ///////////////
//           offset += (SN/2)+2;
//           end = BS - offset;
//           if (end < 0) break;
//         }
//         // cout << "sdfwd" << endl << "sdfwd " << end << endl;
//         if (end < 0) break;
//       }
//     }
//   }
//   return uiTotalEvents;
// }
#endif DATA_FORMAT
