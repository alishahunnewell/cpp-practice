#include <iostream> 

int doubleNum(int x)
{
    return x * 2;
}

int main()
{
    int x{};                            //created an integer var x and initialized to 0
    std::cin >> x;                      //asks user to input a value for x, replaces initial value of 0
    std::cout << doubleNum(x) << '\n';  //prints the value of user inputted x by calling the 

    return 0;
}