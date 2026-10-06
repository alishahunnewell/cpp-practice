//when to use a function parameter versus a local variable 
#include <iostream> 

// int getValueFromUser(int val) //where val is a function parameter
int getValueFromUser() 
{
    int val {}; //the correct way is to make val a local variable
    std::cout << "Enter a value: ";
    std::cin >> val;
    return val;
}

int main()
{
    // int x{};
    int num {getValueFromUser() }; 

    std::cout << "You entered " << num << '\n';

    return 0;
}