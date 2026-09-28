#include <iostream>
 
//suppose we want to double the number of the first user input
int main()
{
    std::cout << "Enter an integer: ";

    int num{ };      //define variable num as an integer variable
    std::cin >> num; //get integer values from user keyboard 
//u could create a new variable, initialize it, and then print it, or you could ; 
    std::cout << "Double that number is: " << num * 2 << '\n';   //use an expression to multiple num*2 at the point needed to print 
    std::cout << "Triple that number is: " << num * 3 << '\n';   //use an expression to multiple num*3 at the point needed to print 

    return 0;

}