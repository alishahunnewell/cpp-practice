#include <iostream> 
//note 
//functions that have parameters that are not used in the body of the function= unreferenced parameters
void doSomething(int /*count*/)//now it wonnt generate a warning 
{
    ///function used to do something with count but it is not used any longer / Function implementation
}

int multiply(int x, int y) //this will produce a compile error becuase multiply() has a return type of voide, meaning it is  a non value returning function
//since func is trying to return a value via return statement this function errors, bc the return type should be int
{
    return x * y;
}


int main()
{
    doSomething(4); //recall that void functions do not return a value, and cannot be operated on in expressions that require a value
    std::cout << multiply(4, 5) << '\n';

    return 0;
}//similarly with unused local vars your compiler will prolly warn that variable count has been defined and not used 

