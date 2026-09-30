#include <iostream>

int main()
{

    //get value from user 
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;

    //print the value doubled 

    std::cout << num << "doubled is :" << num * 2 << '\n';

    return 0;
}

//note the following broken down version of the cod eabove does not work
// void getValueFromUser()
// {
//  	std::cout << "Enter an integer: ";
// 	int input{};
// 	std::cin >> input;
// }

// int main()
// {
// 	getValueFromUser(); // Ask user for input

// 	int num{}; // How do we get the value from getValueFromUser() and use it to initialize this variable?

// 	std::cout << num << " doubled is: " << num * 2 << '\n';

// 	return 0;
// }