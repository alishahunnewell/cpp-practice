//notes
//local variables are defined inside body of  function 
//varaibles lifetimes exist within {}, lifetime is a runtime property
#include <iostream>

int add(int x, int y)
{
    int z{ x + y}; //local variable is z

    return z;
}

void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    int x{ 0 }; //x lifetime begins here 

    doSomething(); //x is still alivr during this func call 

    add(1, 2); 

    return 0;
}//x's lifetime ends here

//function parameters are also generally considered local vars
//after destruction, the memory used by object will be deallocated

//an identifier's scope determines where the identifier can be seen and used within source code
//in scope is when an identifier can be seen and used, otherwise its out of scope

//local scope (or block scope)is usable from the point of def to end of innermost {} containing identifier
    //ensures local vars cant be used before point of def or after they're destroyed
    //local vars defined in one function are not in scope in other functions called 
    