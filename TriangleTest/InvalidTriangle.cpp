#include "InvalidTriangle.h"

// constructor for InvalidTriangle exception class
InvalidTriangle::InvalidTriangle(std::string msg) : message(msg) //initialize message based on msg string
{
}

// returns the message passed at intialization
std::string InvalidTriangle::what ()
{
   return message;
}
