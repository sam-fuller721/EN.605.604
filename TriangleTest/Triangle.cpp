#include "Triangle.h"

// constructor for Triangle
Triangle::Triangle() : Shape(3) // must pass the const number of sides to parent class Shape
{
}

// check that the side lengths are valid for a triangle
bool Triangle::areSideLengthsValid()
{
   // check that the size of lengthOfSides is not greater than expected for a triangle
   if(this->lengthOfSides.size() != this->NUMBEROFSIDES)
   {
      std::cout << "Expected " << this->NUMBEROFSIDES << " sides. But got, " << this->lengthOfSides.size() << std::endl;
      return false;
   }
   
   // the following if statments check that no one side of the triangle is greater than or equal to the other two summed together
   bool validTriangle = true;
   if ((this->lengthOfSides[0] + this->lengthOfSides[1]) <= this->lengthOfSides[2])
   {
      validTriangle = false;
   }
   
   if ((this->lengthOfSides[2] + this->lengthOfSides[1]) <= this->lengthOfSides[0])
   {
      validTriangle = false;
   }
   
   if ((this->lengthOfSides[2] + this->lengthOfSides[0]) <= this->lengthOfSides[1])
   {
      validTriangle = false;
   }
   if (!validTriangle)
   {
      std::cout << "Triangle Lengths do not satisfy the Triangle Inequality" << std::endl;
      this->lengthOfSides.clear();
   }
   // return true since none of the failure poits were true
   return validTriangle;
}

// check the number of equal sides and return the appropriate type as a string
std::string Triangle::getType()
{
   // get the number of sides that are equal to each other
   int equalSides = this->getNumberOfEqualSides();
   // intialize a string for holding the selected type
   std::string triangleType = "";
   if (equalSides == 3) // 3 sides are equal to each other
   {
      triangleType = "Equilateral";
   }
   if (equalSides == 1) // 1 pair of sides are equal
   {
      triangleType = "Isosceles";
   }
   if (equalSides == 0) // 0 sides are equal
   {
      triangleType = "Scalene";
   }
   // return the selected string
   return triangleType;
}

// calculate the number of equal sides in the triangle
int Triangle::getNumberOfEqualSides()
{
   // initialize and integer for holding the number of equal sides
   int equalLengthSides = 0;
   // check every possible pair and increment equalLengthSides for each pair that matches
   if(this->lengthOfSides[0] == this->lengthOfSides[1])
   {
      equalLengthSides++;
   }
   if(this->lengthOfSides[0] == this->lengthOfSides[2])
   {
      equalLengthSides++;
   }
   if(this->lengthOfSides[1] == this->lengthOfSides[2])
   {
      equalLengthSides++;
   }
   // return the number of pairs that matched
   return equalLengthSides;
}
