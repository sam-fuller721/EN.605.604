#include "Statistic.h"

// constructor for statistic class, sets accumulator and squared accumulator to 0.0
Statistic::Statistic() : dataAccumulator(0.0), squaredDataAccumulator(0.0)
{
}

void Statistic::add(double dataElement)
{
   this->statisticalData.emplace_back(dataElement);
   this->dataAccumulator += dataElement;
   this->squaredDataAccumulator += (dataElement * dataElement);
}

double Statistic::average() const
{
   double average = this->dataAccumulator / this->statisticalData.size();
   return average;
}
 
double Statistic::STD() const
{
   double variance = (this->squaredDataAccumulator - (this->dataAccumulator * this->average())) / (this->statisticalData.size() - 1);
   double standardDeviation = sqrt(variance);
   return standardDeviation;
}
