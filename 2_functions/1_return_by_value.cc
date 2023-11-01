#include <iostream>
#include <cstdlib>


int returnFive()
{
    return 5;
}

int getValueFromUser()
{
    std::cout << "Enter a value (integer): ";
    int input{};
    std::cin >> input;
    // std::cout << "Value: " << input << std::endl;

    return input;
}

int main()
{
    std::cout << returnFive() << std::endl; // return by value

    int num {returnFive()};
    std::cout << "num: " << num << std::endl;

    int a{ getValueFromUser()};
    int b{ getValueFromUser()};

    std::cout << "Value 1: " << a << std::endl;
    std::cout << "Value 2: " << b << std::endl;
    return EXIT_SUCCESS;
    // return EXIT_FAILURE
    // return 0;
}
