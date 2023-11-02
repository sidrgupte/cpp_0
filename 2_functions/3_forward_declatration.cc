#include <iostream>

int addNums(int, int); // it is a best practice to keep the parameter names in declarations

int main()
{
    int x{5}, y{7};

    std::cout << addNums(x,y) << std::endl;
    return 0;
}

int addNums(const int a, const int b)
{
    return a+b;
}
