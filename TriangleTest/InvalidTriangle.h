#ifndef InvalidTriangle_h
#define InvalidTriangle_h

#include <iostream>
#include <stdexcept>

// this class handles all InvalidTriangle based exceptions
class InvalidTriangle : public std::exception
{
public:
   InvalidTriangle(std::string msg);
   
   std::string what ();
   
private:
   const std::string message;
};

#endif /* InvalidTriangle_h */
