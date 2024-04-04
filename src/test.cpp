// #include "BinaryDataStructs.h"
// #include <cstdint>

// uint32_t DataFileReader::ConsequentialEventsReading()
// { 
//   TotalHeader.clear();
//   uint32_t uiBuffer[3] = {0,0,0};
//   uiEventWithMaxSize = 0;
//   uiTotalEvents=0;

//   uint32_t uiMaxSize = 0;
//   fseek(fd,0,SEEK_END);
//   size_t sSizeOfFile = ftell(fd);
//   fseek(fd,0,SEEK_SET);

//   uint32_t w;
// for(int i=0; i<100000;i++)
//   {
//     fread(&w,4,1,fd);
//     std::cout << "0x";
//     std::cout.width(4); std::cout.fill('0'); std::cout<<hex<<w << " ";
//     if (i%10==0)std::cout<<std::endl;

   
//   }
  
//   return uiTotalEvents;
// }