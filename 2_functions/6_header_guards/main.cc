#include <iostream>
// #pragma
#include "square.hh" // it includes the getSquareSides function
#include "wave.hh" // it include square.hh which in turn includes the getSquareSides function

int main()
{
    std::cout << "Square Side: " << getSquareSides() << std::endl;
}
