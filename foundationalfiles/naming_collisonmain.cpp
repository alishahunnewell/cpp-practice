#include <iostream> // imports the decleration of std::cout into global scope

//the following statements are part of the global namespace
void foo(); //okay ; forward decleration function
int x;      //compiles but discouraged, non const global var def without initializer
int y{ 5 }; //compiles but discouraged (same as above but w initializer)
//x = 5;    // compile error: executable statements are not allowed in namespaces

//can also use a using directive to allow access to names in namespace w no prefix
using namespace std;
//if we were to define our own cout func in global namespace we would get an error
//avoid using-directives at the top of program or in header files


void myFCn(int x)
{//curly braces used to delineate nested scope region for function
    std::cout << 2 * x;
    //explicit namespace qualifier std:: tells compiler we want to use cout from std namespace
    //The scope resolution operator is ::, cout is an object of ostream class used to send output

}
//updating scope of required learning and pivoting to C practice

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