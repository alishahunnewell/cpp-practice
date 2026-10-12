#include <iostream> 

int add(int x, int y);//needed so main.cpp knows that add() is a func defined elsewhere

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; //compile error
    return 0;
}
//same as before, when the compiler reaches add it doesnt know what identifier add is
//compiler compiles each file individually, and doesnt know contents of other code files
//this is so it allows source files to be compiled in any order, changes to source means 
    //only source file needs to be recompiled, and reduced naming conflicts b/w identifiers

//solution is to use forward decleration