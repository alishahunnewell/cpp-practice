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
    
//note that std:cout is buffered, and using std::endl outputs a newline and flushes the buffer
//multiple lines ending in std::endl will be multiple flushes and slow to do

//instead, to output a newline without flushing the output buffer we use \n
    int x{ 5 }; 
    std:: cout << "x is equal to:" << x << '\n'; //single qupoted by itself, conventional 
    std::cout << "Yep." << "\n"; //double quoted by itself, unconventional but okay
    std::cout << "And that's all, folks!\n"; //btween double quotes in existing text, conventional 
//when \n is not being embedded into an existing line of double quoted text it is single quoted
//note perfer \n over std::endl when outputting text to console 

    return 0;

}