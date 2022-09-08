#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include "Statistic.h"

int main()
{
   Statistic statisticClass;
   std::string pathToSequenceFile = "/Users/samuelfuller/Documents/EN.605.604/StatisticalClass/StatisticalClass/sequence.txt";
   std::fstream dataSequenceFile;
   dataSequenceFile.open(pathToSequenceFile);
   if(dataSequenceFile.is_open())
   {
      std::string fileLine = "";
      while(getline(dataSequenceFile, fileLine))
      {
         try
         {
            statisticClass.add(std::stod(fileLine));
         }
         catch (std::invalid_argument)
         {
            std::cout << "Unable to Parse Line: " << fileLine << std::endl;
            std::cout << "All data must be numeric." << std::endl;
         }
      }
      double average = statisticClass.average();
      double standardDeviation = statisticClass.STD();
      std::cout << "Average: " << average << std::endl;
      std::cout << "Standard Deviation: " << standardDeviation << std::endl;
   }
   else
   {
      std::cout << "Failed to Open File: " << pathToSequenceFile << std::endl;
      return -1;
   }
   return 0;
}
