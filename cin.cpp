//std::cin is another predefined var in iostream library, while std::cout 
//prints data to the console, std::cin (stands for character input) reads input
//from keyboard/user, using the extraction operator >> instead of insertion <<

#include <iostream>

int main()
{
    std::cout << "Enter a number: "; //ask user for a number 

    int x{}; //define variable x to hold user input (value initialization) 
    std::cin >> x;  //get number from keyboard and store it in var x 
    
    std::cout << "You entered " << x << '\n'; 
    //can also input more than one single value on a single line 

    std::cout <<"Enter two numbers separated by a space: " << '\n';
    int y{}; //define var y to hold user input and value initialized 
    int z{}; //define var z to hold user input and value initialized
    std::cin >> y >> z; //asks for two numbers then stores in var y and z respectively

    std::cout << "You entered " << y << " and " << z << '\n';
//still best practice is to initialize vars first, even if user provided value overrides 
//note std::cin is buffered, recall that outputting data occurs in two stages; 1) data from 
//each output request is added to end of output buffer, 2) data from front of output buffer is 
//flushed to output device (console). adding data to the end of a buffer n removing it from the 
//front ensures data processed in same order it was added (called FIFO, first in first out)

//each line of input data in the input buffer is terminated by '\n' char

    std::cout << "Enter two numbers: " << '\n';

    int a{};
    std::cin >> a; 

    int b{};
    std::cin >> b;

    std::cout << "You entered " << a << " and " << b << '\n';

    
    return 0; 
}