#include <iostream>

//x is not in scope anywhere in this function 
void doSomething()
{
    std::cout << "Hello!\n";
}

int add(int x, int y) //x and y are created and eneter scope
{
    return x + y; 
}

int main()
{
    //x cant be used here bc its not in scope yet
    // int x { 0 }; //x enters scope here and can now be used within this func
    doSomething();
    int a{ 5 };// a enters scope as its created and initialized
    int b{ 6 };//b enters scope 
    //a and b are both only usable within main()

    std::cout << add(a, b) << '\n'; //calls add() where x=5 and y=6

    return 0;
}//x goes out of scope here and can no longer be used 
//"going out of scope" typically applies more to objects rather than identifiers
