#include <iostream>
#include "add.hh" // header file which contains the forward declaration
#include "subtract.hh"
// int add(int ,int); // forward declaration - good for including 1 or 2 functions

int main()
{
    std::cout << "The sum of 1 and 2 is: " << add(1,2) << std::endl;
    std::cout << "The difference of 1 and 2 is: " << subtract(1,2) << std::endl;


    /*BEST PRACTICE:
        1. Avoid putting definitions (or variables and functions) in the header files (for now)
        2. Source files should include their paired headers (eg: add.cc has add.hh)
        3. Avoid #including .cc/.cpp files
        4. Use double quotes (instead of angled brackets) to include header files that you've written
        5. Always use header guards
    */
}
