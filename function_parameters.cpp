//notes
//recall the getValueFromUser func used earlier, what if we wanted to put the output line into its own function?

//function parameter= variable used in the header of a function definition
//they work almost identically to variables defined inside the function w one difference, they are initialized w a value provided by the caller of the function
//here are examples of function w different numbers of parameters 

//now an argument= a value that is passed from the caller to the function when a function call is made 
    //doPrint(); this call has no arguments
    //printValue(6); 6 is the argument passed to function printValue()
    //add(2,3); //2 and 3 are the arguments passed to function add()
#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
    //this func takes no parameters, and does not rely on caller for anything
}

void printValue(int x)
{
    std::cout << x << '\n';
    //this function takes one integer parameter named x
    //caller will supply the value of x

}


int add(int x, int y)
{
    std::cout << x + y << '\n';
    return x + y;
    //this function has two ineger parameters, one called x and other y
}

int main()
{
    doPrint(); //this call has no arguments, so the function will just print the message
    printValue(6); //6 is the argument passed to function printValue()
    add(2,3); //2 and 3 are the arguments passed to function add()

    return 0;
}