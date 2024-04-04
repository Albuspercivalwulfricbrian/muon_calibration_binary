#include <iostream>
#include <fstream>
#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>
#include <TChain.h>
#include <TString.h>
#include "waveform_format.h"

const Int_t H_SIZE = 7168;
const Int_t channels_number = 2;

void BinToRoot(string pathName = "/media/doc/DATA/SiPM_low_energy_detector/Na22_BGO/irradiated/Na22/")
{
    string name = "38_64";
    DataFileReader *dataFile = new DataFileReader(pathName + name);
    WfData wf_data[TOTAL_CHANNELS];

    TFile* RootDataFile = new TFile ((TString)pathName + (TString)name + ".root", "RECREATE");
    TTree* RootDataTree = new TTree ("adc64_data","adc64_data");
    for (int i = 0; i < channels_number; i++) wf_data[i].Initialize();
    for (int i = 0; i < channels_number; i++) RootDataTree->Branch((Form("channel_%i", i)),&wf_data[i], "wf_size/S:wf[wf_size]/S");

    const int calculate_events = 1000000; 
    for (int i = 0; i < calculate_events; i++)
    {
        if (i >  calculate_events) break;
        //dataFile->MoveToEventWf(i);
        dataFile->CalculateWfs(i);
        for (int j = 0; j < channels_number; j++)
        {
            wf_data[j].Initialize();
            wf_data[j].FillWf(dataFile->wf[j]);
        }
        RootDataTree->Fill();

        if (i % 1000 == 0)cout << (float)i/(float)calculate_events*100 <<"%" << endl;
        
        if (wf_data[0].wf[0]==-10009 && wf_data[1].wf[0]==-10009 ) break;
    }
    RootDataTree->Write();
    RootDataFile->Close();

}
        



