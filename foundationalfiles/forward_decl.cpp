#include <iostream> 

//following is bad, and wont compile
// int main()
// {
//     std::cout << "The sum of 3 and 4 is : " << add(3, 4) << '\n';
//     return 0;
// }

// int add(int x, int y)
// {
//     return x + y;
// }

//reorder the function definitions
//OR USE a forward decleration; allows us to tell compiler about the existence of an identifier before actually defining the identifier

int add (int x, int y); //forward decleration of add() using a funciton decleration

int main()
{
    std::cout<< "The sum of 3 and 4 is : " << add(3, 4) << '\n';
    return 0;

}

int add(int x, int y)//even though body of add() isn't defined until here
{
    return x + y;
}