#include <iostream>

int main()
{
    int width {5}; //define variable width and initialize w 5 as initial value 
    std :: cout << width; //prints 5 


    //five common forms of initializations
    int a; //default initialization (garbo) 
    //traditional
    std ::cout << a; //prints garbo value


    int b = 5; //copy initialization 
    std :: cout << b; //prints 5


    int c(6); //direct initialization 
    std :: cout << c; //prints 6


    //modern 
    int d {7}; //direct list initialization PREFERRED
    std :: cout << d; //prints 7

    int e {}; //value initialization 
    std :: cout << e; //prints 0

    return 0;



}
