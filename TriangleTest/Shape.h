#ifndef Shape_h
#define Shape_h

#include <iostream>
#include <vector>

class Shape
{
public:
   Shape(int numberOfSides);
   virtual int getNumberOfEqualSides() = 0;
   virtual std::string getType() = 0;
   virtual bool areSideLengthsValid() = 0;
   
   void printSides();
   int getNumberOfSides();
   void queryUserForSideLengths();
protected:
   std::vector<int> lengthOfSides;
   const int NUMBEROFSIDES;
};
#endif /* Shape_h */
