//notes
//void is a return type to tell a compiler that a function doesn't return a value
//they do not require return statements, you can if you want but its redudant to put empty return;
#include <iostream>

void printHi()
{
    std::cout << "Hi" << '\n';
    //this func does not return a value so no return statement required

    //note that if you tried to give a return value within the def of a void function it will give compile error
    //return5; //this would try to return a value but the func is void so it will give compile error
}

int main()
{
    printHi(); // is ok, func is called and no value is returned 


    //note that void funcs cant be used in expression that requires value

    std::cout << 5; //this is ok, 5 is a literal value being sent to console to be printed
    // std::cout << ; //this will give compile error bc no value is provided 


    //now consider the following 
    // std::cout << printHi(); //this will give compile error, printHI() is a void and cant be used in cout expression that needs value


    return 0;
}

//useful behavior of printing something but it doesnt need to return anything back to the caller 
