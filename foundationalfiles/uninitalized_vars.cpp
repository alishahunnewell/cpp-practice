//unitialized vars variable that has not been given known value through initialization or assignment, default value is garbage (whatever 
//is already stored in that memory address)
#include <iostream> 

int main()
{
    //define integer variable named x 
    int x; // var is uninitialized because we haven't given it a value 

    std::cout << x << '\n'; //what shall be printed??? 
    

    //note, using the value from an unintialized variable is the first example of undefined behavior (UB; result of executing code whose 
    //behavior is not been given a known value ) 

    //implementation are specific compilers associateds w the standard lib it comes w, implementation defined behavior must be documented
    //and consistent, for ex;

    std::cout<< sizeof(int) << '\n'; //prints how many bytes of memory an int value takes 
    return 0;
    //we got four bytes yay 
    //tip; avoid implementation defined and unspecified behavior whenever possible as they can cause malfuctions for later implementations
}