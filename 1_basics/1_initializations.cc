#include <iostream> // preprocessor directive

int main()
{

    // WAYS OF INITIALIZATION
    int a;          // default initialization
    int b = 5;      // copy initialization
    int c(6);       // direct initialization
    int d {7};      // direct list initialization - uniform initialization (modern)
    int e = {8};    // copy list initialization   - uniform initialization (modern)
    int f {};       // value initialization (zero initialization)


    /*
    Benefit of Uniform Initialization:
        It disallows 'narrowing conversions' i.e. if we try to brace initialize
        a variable using a value that the variable cannot safely hold, then the
        compiler will produce an error.

        eg. int a {4.5}; --> This will throw an error as 4.5 is not int type.
            int a = 4.5; --> This will simply drop the fractional part and a will become 4.
    */
   std::cout << "f: " << f << std::endl;
   std::cout << "a: " << a << std::endl;

   // Zero initialization:
   int p {};  // use value initialization if the value is temp and will be replaced
   int q {0}; // use explicit initialization if you're actually using that value

   // Unused Variables:
   [[maybe_unused]] int r{5};

   /* BEST PRACTICES:
        1. Always initialize your variables upon creation.
        2. Use list initialization (i.e. int a {4})
        3. Avoid definiting multiple variables in single line.
        4. Use [[maybe_unused]] for unused variables.
        5. Use "\n" instead of std::endl as std::endl also flushes the buffer making
           it a bit inefficient.
   */

   return 0;
}
