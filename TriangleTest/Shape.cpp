#include "Shape.h"

// Shape constructor
Shape::Shape(int numberOfSides) : NUMBEROFSIDES(numberOfSides) // intialize NUMBEROFSIDES
{
}

int Shape::getNumberOfSides()
{
   return this->NUMBEROFSIDES;
}

// prints the current set of side lengths in a bracketed list
void Shape::printSides()
{
   std::cout << "[ ";
   // iterate over all side lengths in lengthOfSides and print them
   for(const int side : this->lengthOfSides)
   {
      std::cout << side << " ";
   }
   std::cout << "]" << std::endl;
}

// get sides lengths from user
void Shape::queryUserForSideLengths()
{
   // query user for side lengths for as many sides as has been set at intialization
   for(int side = 0; side < this->NUMBEROFSIDES; side++)
   {
      // boolean flag to check if the side length is a valid double
      bool badLength = true;
      // loop until the side length can be converted to a double
      while(badLength)
      {
         // intialize a string for holding the user input
         std::string userInput = "";
         try
         {
            // probe user for input
            std::cout << "Side " << side + 1 << ": ";
            std::cin >> userInput;
            // attempt to convert userInput into a int and add it to the list of side lengths
            lengthOfSides.push_back(std::stoi(userInput));
            // flag that the input was ok
            badLength = false;
         }
         catch (std::invalid_argument) // catch if std::stod fails to convert the string to a double
         {
            std::cout << "Invalid Length: " << userInput << std::endl;
            std::cout << "Length must be a valid integer" << std::endl; // loop back and ask for the side length again
         }
      }
   }
}
