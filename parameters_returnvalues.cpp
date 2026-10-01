#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int multiply(int z, int w)
{
    return z * w;
}



int main()
{
    std::cout << add(4, 5) << '\n'; //4 and 5 are arguments passed to the function add()
    std::cout << add(1 + 2, 3 * 4) << '\n';

    int a{ 5 };
    std::cout << add(a, a) << '\n'; //5 and 5 are arguments passed to the function add()
    std::cout << add(1, multiply(2,3)) << '\n'; //2 and 3 are arguments passed to the function multiply() and the return value of multiply() is used as an argument to add()
    return 0;
}