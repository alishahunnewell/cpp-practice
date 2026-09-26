#include <iostream> 

int main()
{
    std::cout << "Enter a number: "; 
    int x{};
    std::cin >> x; 

    std::cout << "You entered " << x << '\n';
    return 0;
}

//to see how what cin outputs based on inpits try several different inputs,
//integers will return integers but letters will return zero, and fractions truncate down