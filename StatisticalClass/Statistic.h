#ifndef Statistic_h
#define Statistic_h

#include <stdio.h>
#include <vector>
#include <cmath>
#include <iostream>

class Statistic
{
public:
   //Constructor: initialize private data
   Statistic();
   // add an item to the statistics
   void add(double x);
   // get average
   double average() const;
   // get Standard deviation: using the hint
   double STD() const;
private:
   // container for holding all the units of data to be processed
   std::vector<double> statisticalData;
   // accumulator to hold the running sum of the provided data
   double dataAccumulator;
   // accumulator for the data squared
   double squaredDataAccumulator;
};

#endif /* Statistic_h */
