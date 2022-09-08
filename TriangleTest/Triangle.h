#ifndef Triangle_h
#define Triangle_h

#include <iostream>
#include <stdexcept>
#include <sstream>

#include "Shape.h"

class Triangle : public Shape
{
public:
   Triangle();
   int getNumberOfEqualSides() override;
   std::string getType() override;
   bool areSideLengthsValid() override;
};
#endif /* Triangle_h */
