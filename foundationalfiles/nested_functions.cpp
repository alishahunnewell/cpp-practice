//nested functions is one whose definition is inside of another function , in c++ functions cannot be nested 
//this is an illegal program lol 
#include <iostream> 

// int main();
//{
//     void foo() //illegal, functions definition  is nested inside finction main
//     {
//         std::cout << "foo!\n";
//     }

//     foo();    //funciton call

//     return 0;

//}

//proper way 

void foo()   //not inside main()
{
    std::cout<<"foo!\n";

}

int main()
{
    foo();

    return 0;
}