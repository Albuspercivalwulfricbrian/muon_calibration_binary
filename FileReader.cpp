#include "BinaryDataStructs.h"
#include <string>

int main(int argc, char **argv)
{
    if(argc == 2) {
        argv[1];
        // argv[2];
        // argv[4];
    }
	// string source_path = (string)argv[1];
    // string run_name = (string)argv[2];

    DataFileReader DFR(argv[1]);
    DFR.ConsequentialEventsReading();
    return 0;
}