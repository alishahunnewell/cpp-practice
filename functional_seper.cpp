#include <iostream>

int add(int x, int y)
{
    return x + y;
}
int main() 
{
    int x{ 5 };
    int y{ 6 };

    std::cout << add(x, y) << "\n";
    
    std::cout << "Enter an integer: ";
    int a{};
    std::cin >> a;

    std::cout << "Enter another integer: ";
    int b{};
    std::cin >> b; 

    int sum{ a + b }; //sum can be initialized with intended value
    std::cout << "The sum is: " << sum << '\n';

    return 0;
}//works because x and y are distinct variables, the ones in main have nothing to do withthe ones in add()

//best practice is that local variables inside the function body should be defined close to their first use 
//not C used to require all local vars to be defined at top of function
