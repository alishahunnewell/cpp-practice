#include <iostream>

// int main ()
// {
//     int x{};
//     std::cout << "Enter an integer: ";
//     std::cin >> x;

//     int y{};
//     std::cout << "Enter an integer: ";
//     std:cin >> y;

//     std::cout << x << " + " << y << " = " << x + y << '\n';

//     return 0;
//     //while this program works, its redudant DONT REPEAT 
// }


//we can update this program to use our getBalueFromUser function 

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int x{ getValueFromUser() };    //first call to getValueFromUser 
    int y{ getValueFromUser() };    //second call to getValueFromUser 

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}
