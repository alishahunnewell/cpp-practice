//functions are reusable sequences of statements designed to do a specific task 
#include <iostream>

//definition of user defined function doPrint()
void doPrint()
{
    std::cout << "In doPrint()\n";
}

//functions can call functions that call other functions 
void dob()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std:: cout << "Starting doA()\n";

    dob();

    std::cout << "Ending doA()\n";
}

//definition of user defined function main()
int main()
{
    std::cout << "Staring main()\n";
    doPrint();                      //Interrupt main() by making a function call to doPrint(), main() is caller 
    //functions can be called more than once 
    doPrint();

    
    //function that calls other function part
    doA();
    
    std::cout << "Ending main()\n"; //statement executed after doPrint() ends 


    return 0;
}