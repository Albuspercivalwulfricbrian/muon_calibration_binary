 #!/usr/bin/bash

export PROJECT_PATH=/mnt/DATA/muon_calibration/muon_calibration_binary
# export PROJECT_PATH=.
# export SOURCE_PATH=$(yad --file-selection --directory)/
export SOURCE_PATH=/media/doc/DATA/entanglement/pure_data/

echo $SOURCE_PATH
export temp_DIR=calibrated_files/
export BUILD_DIR=$PROJECT_PATH/build

echo $SOURCE_PATH
mkdir -p  $SOURCE_PATH/$temp_DIR
counter=0
NUM_PROCS=4

for filename in ${SOURCE_PATH}mpd_*.root;
do
    fname=$(basename $filename .root)
    echo $fname
    DIR="$SOURCE_PATH$temp_DIR$fname"
    if [ -d "$DIR" ]
    then 
        echo "already calibrated"
    else
    ((counter=counter+1))
    mkdir -p  $SOURCE_PATH/$temp_DIR/$fname
    cp -r $PROJECT_PATH  $SOURCE_PATH/$temp_DIR/$fname/macro
    # cd $SOURCE_PATH/$temp_DIR/$fname/macro
    touch $SOURCE_PATH/$temp_DIR/$fname/${fname}_log.out
    cd $BUILD_DIR
    nohup ./FileReader ${SOURCE_PATH} $fname $temp_DIR &    
    nprocs=$(ps -A | grep FileReader |wc -l)
    echo $nprocs        
        while [[ $(ps -A | grep FileReader |wc -l) -ge $NUM_PROCS ]]
        do
            sleep 5
        done
    fi
done
wait
# hadd -f ${SOURCE_PATH}calibrated_time.root ${SOURCE_PATH}${temp_DIR}calibrated_time_*.root
cd $PROJECT_PATH

#rm -rf files/
#touch data_info.txt
#echo "$RUNNAME">>data_info.txt

#rm `find . -name "Converted_fitted*_FIT_QA.pdf" ! -name "Converted_fitted_FIT_QA.pdf"`
#rm Converted_fitted*.root
#rm -rf  $SOURCE_PATH/$temp_DIR


#    nprocs=$(ps -A | grep root |wc -l)
