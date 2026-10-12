#include <iostream>
//io library is the inpit output library part of C++ standard library, it contains definitions for objects like cin, cout, cerr, clog
int main()
{
    //std::cout sends data to console to print out as text, cout= character output
    //recall the hello world program, where the insertion operatior is <<
    std::cout << "Hello world!"; //prints Hello world! 
    std::cout << 4; //prints 4
    int x{ 5}; //define integer var x initalized w value 5
    std::cout << x; //prints 5

    //to print more than one thing on the same line, insertion operator can be used multiple times 
    //in single statement to concatenate multiple outputs 

    std::cout<< "Hello" << " world!";

    return 0; 

}