#include <iostream> 

int getNumbers()
{
    return 5; 
    return 7;

}

int main()
{
    std::cout << getNumbers() << '\n';     //prints 5
    std::cout << getNumbers() << '\n';    //also prints five

    return 0;
}

//recall, return doesn't just hand back a value it also ends the function immediately