
#include <TTree.h>
#include "ChannelEntry.h"
#include <cstdint>

using namespace std;

    void IntegralInfo::Initialize()
    {
        signal_length = 0;
        npeaks = 0;
        end_amplitude = 0;    
    }
    void short_energy_ChannelEntry::Initialize()
    {
        charge = 0.;
        time = 0.;
        amp = 0; 
        zl_rms = 0.;
        zl = 0.;
        ADC_ID = 0;
        // nCoincidencePeaks = 0;
        II.Initialize();
    }


    void diff_short_energy_ChannelEntry::Initialize()
    {
        min_diff = 0;
        min_diff_time = 0;
        max_diff = 0;
        max_diff_time = 0;
    }    

    void ChannelEntry::Initialize()
    {
        // for (int i = 0; i < sizeof(wf)/sizeof(wf[0]); i++) {wf[i] = 0; dwf[i] = 0;}
        ADCID = -1000;
        channel = -1000;
        wf.clear();
        dwf.clear();
        wf_size = 0;
    }

    void ChannelEntry::GetWfSize() {wf_size = wf.size();}

    void ChannelEntry::SplineWf()
    {
        // float wf1[MAX_N_SAMPLES] = {0};
        vector<float> wf1;
        const int32_t SplineWidth = 2;
        for (int16_t i = 0; i < wf_size; i++)
        {
            float point = 0;
            int32_t il=i-SplineWidth; int32_t ir=i+SplineWidth;
            if (il<0) il=0;
            if (ir>wf_size-1) ir=wf_size-1;
            float counter = 0;
            for (int32_t in = il; in <=ir; in++) {point+=wf[in];counter++;}
            point/=counter;
            wf1.push_back(point);
        }
        for (int16_t i = 0; i < wf_size; i++) wf[i] = wf1[i];
    }

    int32_t ChannelEntry::PointAmpl(int32_t i)
    {
        int32_t v = zl - (int32_t)wf[i];
        return v;

    }
    int16_t ChannelEntry::CountCoincidencePeaks(int32_t threshold1, int32_t threshold2)
    {
        int16_t nCoincidencePeaks=0;
        int32_t epsilon1 = 10;
        int32_t epsilon2 = 100;
        // int16_t wf1[MAX_N_SAMPLES] = {0};
        for (int32_t i = fGATE_BEG; i < fGATE_END; i++)
        {
            int32_t v = PointAmpl(i);
            int32_t vl = PointAmpl(i-1);
            int32_t vll = PointAmpl(i-2);
            int32_t vr = PointAmpl(i+1);
            int32_t vrr = PointAmpl(i+2);

            if ( (v-vr > epsilon1) && (v-vl > epsilon1) && (v-vrr > epsilon2) && (v-vll > epsilon2) && ( v > threshold1 && v < threshold2)) nCoincidencePeaks++;

        }
        // for (int32_t i = 0; i < wf_size; i++) wf[i] = dwf[i];
        return nCoincidencePeaks;
    } 

    void ChannelEntry::CalculateDiffWf()
    {
        const float Diff_window = 4;
        // int16_t wf1[MAX_N_SAMPLES] = {0};
        dwf.clear();
        for (int16_t i = 0; i < wf_size; i++)
        {
            int32_t il=i-Diff_window; int32_t ir=i+Diff_window;
            if (il<0) il=0;
            if (ir>wf_size-1) ir=wf_size-1;
            // dwf[i]=(int16_t)((float)(wf[ir]-wf[il])/(float)(ir-il));
            dwf.push_back((int16_t)((float)(wf[ir]-wf[il])/(float)(ir-il)));
        }
        // for (int32_t i = 0; i < wf_size; i++) wf[i] = dwf[i];
    } 

    float ChannelEntry::CalculateZlwithNoisePeaks(int a)
    {
        CalculateDiffWf();
        float sum = 0;
        float counter = 0;
        for (int s=fZlLeft+1; s < fZlRight; ++s) {

            if (abs(dwf[s]) < a && abs(dwf[s-1]) < a && abs(dwf[s+1]) < a) {sum += wf[s]; counter++;}
        }
        zl = sum/counter;
    return zl;
    }

    void ChannelEntry::AssumeSmartScope(bool isPlastic = false)
    {
        fGATE_BEG = peak_position;
        fGATE_END = peak_position;
        
        while (1)
        {
            fGATE_BEG--;
            if (fGATE_BEG < 0) {fGATE_BEG++; break;} 
            if (wf[fGATE_BEG] > zl) break;
        }
        while (1)
        {
            fGATE_END++;
            if (fGATE_END >= wf_size) {fGATE_END--; break;} 
            // if (wf[fGATE_END] > zl) break;
            if (wf[fGATE_END] > zl) break;
            if (isPlastic==true && fGATE_END-peak_position > 8) break; 
        }
    }

    void ChannelEntry::SetBoarders(int32_t BEG, int32_t END)
    {
        fGATE_BEG = BEG;
        fGATE_END = END;
    }
    void ChannelEntry::FindDiffWfPars(int16_t &min_diff, int16_t &min_time, int16_t &max_diff, int16_t &max_time)
    {
        for (int16_t s=fGATE_BEG; s < fGATE_END; ++s) {
            int16_t v = wf[s];
            if (v < min_diff) 
            {
                min_diff = v;
                min_time = 16*s;
            }
            if (v > max_diff) 
            {
                max_diff = v;
                max_time = 16*s;
            }      
        }
    }

    void ChannelEntry::Set_Zero_Level_Area(int32_t i)
    {
        fZlLeft = 0;
        fZlRight = i;
    }
    
    void ChannelEntry::Set_Zero_Level(int EZL)
    {
      zl = EZL;
    }

    int32_t ChannelEntry::Get_Zero_Level()
    {
        const int32_t interv_num = 1;
        int zero_lvl = 0;
        int best_spread = -1;
        for (int i=0; i < interv_num; ++i) {
            int vmin = numeric_limits<int>::max();
            int vmax = numeric_limits<int>::min();
            int sum = 0;
            for (int s=fZlRight/interv_num * i; s < fZlRight/interv_num * (i+1); ++s) {
                int v = wf[s]; 
                sum += v;
                if (v < vmin) vmin = v;
                if (v > vmax) vmax = v;
            }
            int spread = vmax - vmin;
            if (best_spread < 0) best_spread = spread;
            if (spread <= best_spread) {
                best_spread = spread;
                zero_lvl = sum / (fZlRight/interv_num);
            }
            zl = zero_lvl;
        }
        return zero_lvl;
    }
    float ChannelEntry::Get_Zero_Level_RMS()
    {
        const int32_t interv_num = 1;
        float best_spread = -1;
        float rms_zl = -1;
        for (int32_t i=0; i < interv_num; ++i) {
            int32_t vmin = numeric_limits<int>::max();
            int32_t vmax = numeric_limits<int>::min();
            float sum = 0; float sumsquare = 0; float sum_counter = 0;
            for (int32_t s=fZlRight/interv_num * i; s < fZlRight/interv_num * (i+1); ++s) {
                int32_t v = wf[s]; 
                sum += (float)v;
                sum_counter++;
            }
            sum /=sum_counter;
            sumsquare = 0.;
            
            for (int32_t s=fZlRight/interv_num * i; s < fZlRight/interv_num * (i+1); ++s) {
                sumsquare += (float)(wf[s] - sum)*(wf[s] - sum)/sum_counter;
            }            
            rms_zl = sqrt(sumsquare);
            if (best_spread < 0) best_spread = rms_zl;

        }
        return best_spread;
    }

    float ChannelEntry::Get_Charge()
    {
        float gateInteg = 0;
        {
            //for (int s=180; s <= 680; ++s) {

             for (int s=fGATE_BEG; s <= fGATE_END; ++s) {
                //if (zl < (float)wf[s] && s > peak_position+7) {II.signal_length = s - fGATE_BEG; II.end_amplitude = (float)zl - (float)wf[s];break;}
                gateInteg +=  ((float)zl - (float)wf[s]) ;
            }                
        }

        return gateInteg;
    }
    
    IntegralInfo ChannelEntry::GetIntegralInfo()
    {
        return II;
    }


    int16_t ChannelEntry::Get_time()
    {
        amp = 0;
        peak_position = 0;
        if (wf_size == 0) 
        {
            amp = 0;
            peak_position = 0;
            return peak_position;
        }
        for (int s=fGATE_BEG; s < fGATE_END; ++s) {
            int32_t v = zl - wf[s];
            if (v > amp) {
                amp = v;
                peak_position = s;
            }
        }
        // if ( amp > 0) cout << amp << endl;
        return peak_position;
    }
    float ChannelEntry::Get_time_gauss()
    {
        if (wf_size == 0) return 0;
        float peak_search = 0.;
        float ampl_sum = 0;
        for (int32_t s= fGATE_BEG; s < fGATE_END; ++s) {
            int32_t v = zl - wf[s];
            if (v > amp*0.1)
            {
                ampl_sum += (float) v;
                peak_search+= (float) v*s;
            }
        }
        peak_search /= ampl_sum;
    return 16.0*peak_search;
    }
////////////
    uint16_t ChannelEntry::Get_Amplitude()
    {
        return (uint16_t)amp;
    }

    void ChannelEntry::FillWf(int16_t *Ewf)
    {
        for (int i = 0; i < SNAPSHOT_LENGTH; i++)
        {
            wf[i] = Ewf[i];
            wf_size++;
            // cout << wf[i] << endl;
        }
    }
    
    void ChannelEntry::InvertSignal()
    {
        for (int i = 0; i < wf_size; i++) wf[i]=-wf[i];
    }
//##################
