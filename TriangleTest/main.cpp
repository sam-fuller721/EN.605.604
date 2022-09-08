#include <iostream>
#include <stdexcept>
#include <vector>

#include "Triangle.h"

// this program checks the type of a triangle based on 3 side lengths provided by the user
int main()
{
   // create an instance of triangle
   Triangle triangle;
   std::cout << "Input the 3 Lengths of your Triangle" << std::endl;
   // loop until a valid triangle has been provided
   do
   {
      // get the side lengths from the user
      triangle.queryUserForSideLengths();
   }
   while(!triangle.areSideLengthsValid()); // check if the side lengths are valid for a triangle
   
   std::cout << "Using Sides: ";
   triangle.printSides(); // print the side lengths out for the user to read
   std::cout << "You Entered a Triangle of Type: " << triangle.getType() << std::endl;
   
   return 0;
} // end of main
