#include <iostream>
int main ()
{
    //integer can only hold non fractional values 
    //initializing an int with a fractional value 4.5 requires compiler 
    //to convert 4.5 to a value that an int can hold 
    //such conversion is a narrowing conversion, since the fractional part of the value will be lsot 

    // int w1 {4.5}; //complie error: list -init does not allow narrowing conversion
    int w1;
    w1 = 4.5; //okay : copy assignment allows narrowing conversion
    int w2 = 4.5; //compiles: w2 copy initialized to value 4
    int w3 (4.5); // compiles: w3 direct initialized to value 4 

    int width {}; //value initialization / zero initialization to value 0
    //use direct list initialization when ur using the initial value 
    int x {0}; //direct list initialization to value 0}
    std:: cout << x; //using that zero value here
    //use value initializaiton when objects value in temp and will be replaced 
    int y{}; //value initialization to value 0
    std :: cin >> y; //immediately replace that value so an explicit 0 would be pointless

    return 0;
    //note narrowing conversions only applies to list initialization not to any 
    //subsequent assignments to the variable 
}