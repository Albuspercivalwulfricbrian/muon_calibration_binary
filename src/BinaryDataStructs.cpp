#include "BinaryDataStructs.h"

void DataFileReader::DisplayTimeToCalculate(int32_t EvNum, int32_t total_entries, time_t start_time)
{

  std::cout<< u8"\033[2J\033[1;1H"; 
  std::cout << (float)EvNum/(float)total_entries*100 << "%" << std::endl;
  time_t time_left = (time(NULL)-start_time)*(float)(total_entries-EvNum)/(float)(EvNum);
  std::cout << "time left: ";
  if (time_left/3600 > 0) cout << time_left/3600 <<"h ";
  if ((time_left%3600)/60 > 0 || time_left/3600 == 0) cout << (time_left%3600)/60 << "m ";
  cout << (time_left%3600)%60<< "s " <<std::endl;
  std::cout << "time spent: ";
  time_left = (time(NULL)-start_time);

  if (time_left/3600 > 0) cout << time_left/3600 <<"h ";
  if ((time_left%3600)/60 > 0 || time_left/3600 == 0) cout << (time_left%3600)/60 << "m ";
  cout << (time_left%3600)%60<< "s " <<std::endl;
}

uint32_t DataFileReader::ConsequentialEventsReading()
{ 
  TotalHeader.clear();
  uint32_t uiBuffer[3] = {0,0,0};
  uiEventWithMaxSize = 0;
  uiTotalEvents=0;

  uint32_t uiMaxSize = 0;
  fseek(fd,0,SEEK_END);
  size_t sSizeOfFile = ftell(fd);
  fseek(fd,0,SEEK_SET);
  while (!feof(fd))
  {

    fread(&(TotalHeader.syncword),WORD_SIZE,1,fd);
    if ((TotalHeader.syncword) == SYNC_WORD || (TotalHeader.syncword) == SYNC_WORD_ADC64)
    {
      for(int ch = 0; ch < total_channels; ch++) short_channel_info[ch]->Initialize();

      uiTotalEvents++;
      fread(&TotalHeader.EvHeader,sizeof(TotalHeader.EvHeader),1,fd);
      if (uiMaxSize < TotalHeader.EvHeader.length)
      {
        uiMaxSize = TotalHeader.EvHeader.length;
        uiEventWithMaxSize = uiTotalEvents;
      }

      if (TotalHeader.syncword != SYNC_WORD)
          return -1;
      const uint32_t BS = (TotalHeader.EvHeader.length/4); // size of event block excluding event header

      uint32_t uiBuffer[BS];
      for (int p=0; p<BS; p++) uiBuffer[p] = 0;
      fread(&uiBuffer, sizeof(uiBuffer),1,fd);
      uint32_t offset = 0;   // in elements of event buffer
      int32_t  end    = BS;  // remain number of elements (32-bit words)
      if (uiTotalEvents%10000==0) DisplayTimeToCalculate(ftell(fd)/2052,sSizeOfFile/2052,start_time);
      while (end > 0)
      {
        TotalHeader.DeviceHeader.sn     = uiBuffer[offset];
        offset++;
        TotalHeader.DeviceHeader.id     = (uiBuffer[offset] & 0xFF000000)>>24;
        TotalHeader.DeviceHeader.length = (uiBuffer[offset] & 0x00FFFFFF);
        offset++;


        while (end > 0)
        {
        //   cout << "OS: " <<offset << endl;

          TotalHeader.ChHeader.ch     = (uiBuffer[offset] & 0xFF000000) >> 24;
          TotalHeader.ChHeader.length = (uiBuffer[offset] & 0x00FFFFFC)  >> 2;
          TotalHeader.ChHeader.type   = (uiBuffer[offset] & 0x3);

          if(TotalHeader.ChHeader.length > 2048 && end > 3) break;

          offset++; // skip mstream header

          switch (TotalHeader.ChHeader.type)  
          {
            case 0:
              TotalHeader.TimeHeader.taisec   = uiBuffer[offset];
              offset++;
              TotalHeader.TimeHeader.tainsec  = (uiBuffer[offset] & 0xFFFFFFFC) >> 2;
              TotalHeader.TimeHeader.taiflags = (uiBuffer[offset] & 0x3);
              offset++;
              TotalHeader.TimeHeader.chlo     = uiBuffer[offset];
              offset++;
              TotalHeader.TimeHeader.chup     = uiBuffer[offset];
              offset++;

                // if (uiTotalEvents%1000==0)  cout << " Time: " << TotalHeader.TimeHeader.taisec << endl;
              break;
            case 1:
              uint16_t ch = TotalHeader.ChHeader.ch;
              if (TotalHeader.DeviceHeader.sn == 101830393) ch+=64;
              event_waveform.wf.clear(); event_waveform.ADCID = TotalHeader.DeviceHeader.sn;
              const uint16_t SN = (TotalHeader.ChHeader.length-2)*2;  // Number of samples
              TotalHeader.SubHeader.wf_tslo = uiBuffer[offset];
              offset++;
              TotalHeader.SubHeader.wf_tsup = uiBuffer[offset];
              offset++;
              int16_t wave = 0;
              int32_t polarity = 1;
              int32_t iSignalOffset = 0;
            //   cout << "ADC ID: " << TotalHeader.DeviceHeader.id << endl
            //   << "Channel: " << TotalHeader.ChHeader.ch << endl
            //   << "Byte Length: " <<  TotalHeader.ChHeader.length << endl
            //   << "Event Type: " << TotalHeader.ChHeader.type << endl << endl;
            // std::cout<< "ADC name: "; std::cout<<TotalHeader.DeviceHeader.sn << endl;

              event_waveform.channel=ch;

              for (int s=0; s<(SN/2); s++)
              {
                // cout << "here" << endl;
                auto ind = offset+s;     // dirrect cycle
                wave = -(((uiBuffer[ind] & 0xFFFF0000) >> 16) * polarity + iSignalOffset);
                event_waveform.wf.push_back(wave);
                // if (event_waveform.wf.size()%2==0) 
                // cout << Form("wf[%i] = ",2*s) << wave << " "; << Form("wf[%i] = ",2*s+1) 
                wave = -((uiBuffer[ind] & 0xFFFF) * polarity + iSignalOffset);
                event_waveform.wf.push_back(wave);
              //if (event_waveform.wf.size()%10==0) cout << wave << " ";
              }
              event_waveform.wf_size = event_waveform.wf.size();
              ////////////////
              // event_waveform.InvertSignal();

              event_waveform.Set_Zero_Level_Area(50);
              // short_channel_info[ch]->zl = event_waveform.CalculateZlwithNoisePeaks(200);
              short_channel_info[ch]->zl = event_waveform.Get_Zero_Level();
              short_channel_info[ch]->zl_rms = event_waveform.Get_Zero_Level_RMS();

              event_waveform.SetBoarders(150,220);
              int pp = event_waveform.Get_time();
              event_waveform.AssumeSmartScope(false);
              short_channel_info[ch]->amp = event_waveform.Get_Amplitude();
              
              short_channel_info[ch]->time = event_waveform.Get_time_gauss();
              short_channel_info[ch]->charge = event_waveform.Get_Charge();
              short_channel_info[ch]->ADC_ID = event_waveform.ADCID;

              offset += (SN/2);
              break;
          }
          end = BS - offset;
          if (end <= 1) break;
        }
        if (end <= 1) break;
      }
      RootDataTree->Fill();

    }
  }
  return uiTotalEvents;
}