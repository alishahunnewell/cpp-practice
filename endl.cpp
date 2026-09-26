#include <iostream>

int main()
{
    std::cout << "Hi!";
    std::cout << " My name is Alex.";
//seperate output statements dont result in seperate lines of output 
//newline is OS specific char or seqence of chars that moves cursor to start of next line 
//one way to do so is std::endl whoich stands for "end line"

    std::cout << "Hi !" << std::endl; //prints Hi! and moves cursor to start of next line
    std::cout << "My name is Alex." << std::endl; 
    return 0;

}