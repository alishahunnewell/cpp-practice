//notes
//temp obj (also called anonymous) is an unnamed object that is used to hold value that is only needed for a short period 
//common example of temp value;
#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input {};
    std::cin >> input;

    return input; //returns value of input back to caller 

}

int main()
{
    std::cout << getValueFromUser() << '\n'; //where does the return value get stored?
    //return value is stored in a temporary object, passed to std::cout to be printed
    return 0;
}//temp objects have no scope
