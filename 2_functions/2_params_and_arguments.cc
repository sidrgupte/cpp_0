#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int a{};
    std::cin >> a;
    return a;
}

int squareOfValue(const int a)
{
    return a*a;
}

int main()
{
    int a{getValueFromUser()};
    std::cout << "a^2: "  << squareOfValue(a) << std::endl;

    int a_square{squareOfValue(getValueFromUser())};
    std::cout << "a_square: " << a_square << std::endl;

    return 0;
}
