//notes 

//decleration tells the compiler about the existence of an 
//identifier and its associated type information such as
//int add (int x, int y); tells the compiler ab a func
//named add that takes two int parameters and returns int
//int x; //tells compiler ab an int var named x

//definition is a decleration that implements/instatiates
//functions/types or variables for the identifier , ex
#include <iostream>

int doMath(int first, int second, int third, int fourth); //forward decleration


int add(int x, int y)
{
    int z{ x + y };     //instantiates var z

    return z;
}

int x;  //instantiates var x

int main()
{
    std::cout << add(2, 3) << '\n';

    std::cout << doMath(1, 2, 1, 1) << '\n';

    return 0;
}

int doMath(int first, int second, int third, int fourth)
{
    return first + second * third / fourth;
}

//not all declerations are definitions, those that aren't are 
 //pure declerations, such as forward declerations
 //ODR within a file each func var type or template in a
 //given scope can only have one definition
 //within a program each func or var in a given scope can
 //only have one definition
 //types, templates, inline func and inline vars are allowed
 //to have duplicate definitions in diff files, as long
 //as each definition is identical

