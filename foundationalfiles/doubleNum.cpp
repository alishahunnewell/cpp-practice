#include <iostream> 

int doubleNum(int x)
{
    return x * 2;
}

int main()
{
    doubleNum(2);
    std::cout << doubleNum(2) << '\n';
    return 0;
}