#include <iostream>

#define PRINT_JOE

int main()
{
    // #ifdef PRINT_JOE
    //     std::cout << "Joe is defined!" << std::endl;
    // #endif

    // #ifdef PRINT_BOB
    //     std::cout << "Bob is defined!" << std::endl;
    // #endif

    // #ifndef PRINT_BOB
    //     std::cout << "Bob is not defined!" << std::endl;
    // #endif

    /* More C++ Syntax is the following:
        1. #ifdef PRINT_BOB  ----> #if defined(PRINT_BOB)
        2. #ifndef PRINT_BOB ----> # if !defined(PRINT_BOB)
    */
    #if defined(PRINT_JOE)
        std::cout << "Joe is defined!" << std::endl;
    #endif

    #if !defined(PRINT_BOB)
        std::cout << "Bob is not defined!" << std::endl;
    #endif

    // We can use #if 0 if we don't want a block of code to be compiled
    #if 0
        std::cout << "if 0 has been activated!" << std::endl;
    #endif


    return 0;
}
