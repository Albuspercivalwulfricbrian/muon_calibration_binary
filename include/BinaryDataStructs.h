
#ifndef DATA_FORMAT
#define DATA_FORMAT
#include <iostream>
#include <cstdint>
#include "stdio.h"
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
  char rootName[1024];
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
  DataFileReader(const char * dirName, const char * tempName, const char*  Name)
  {
    snprintf(fileName,sizeof(fileName),"%s",dirName);
    snprintf(rootName,sizeof(rootName),"%s",dirName);
    strcat(fileName,Name);
    strcat(rootName,tempName);
    strcat(rootName,Name);
    cout << fileName << " " << rootName << endl;
    if ((fd=fopen(strcat(fileName,".data"), "rb")) == NULL)
    {
        printf("Achtung: Open file error or file not found!\n");
    }
    cout << "Starting" << endl;
    RootDataFile = new TFile ((TString)rootName+ ".root", "RECREATE");
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
#endif DATA_FORMAT
