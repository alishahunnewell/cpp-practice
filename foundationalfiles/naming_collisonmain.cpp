#include <iostream> // imports the decleration of std::cout into global scope

//the following statements are part of the global namespace
void foo(); //okay ; forward decleration function
int x;      //compiles but discouraged, non const global var def without initializer
int y{ 5 }; //compiles but discouraged (same as above but w initializer)
//x = 5;    // compile error: executable statements are not allowed in namespaces



void myFCn(int x)
{
    std::cout << 2 * x;
}


int main()
{
    return 0;
}
void goo(); //okay; function forward decleration

//note
//scope region an area of source code where all declared 
//identifiers are considered distinct from names declared in other scopes
//analogy; two addresses that are the same but ina  different city 

//name space provides another type of scope region that allows you 
// to declare names inside of it for clarity 

//two functions with identical declerations can be defined inside
//different namespaces and no naming collision/ambiguity will occur 

//global namespace/ the global scope is any name not defined inside a 
//class function or a namespace