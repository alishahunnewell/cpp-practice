#include <iostream>
//function has two integer parameters; (x is one and y is one) 
//we now have the tools to make a better getValueFromUser code

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input {};
    std::cin >> input;

    return input;
}

void printDouble(int value) //funciton now has integer parameter
{
    std::cout << value << " doubled is: " << value * 2 << '\n';

}

void printValues(int x, int y)
{
    std::cout << x << '\n';
    std::cout << y << '\n';
//recall that void functions do not need a return statement
}

int main()
{
    printValues(6, 7); //function call has two arguments, 6 and 7
    
    //getValueFromUser improved 
    int num { getValueFromUser() }; 
    printDouble(num);

    //or you could simplify even more by just writing 
    printDouble(getValueFromUser()); //this uses the return value of getValueFromUser directly as an argument to function printDouble


    return 0;
}

