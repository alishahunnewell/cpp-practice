//note that main() is required to return an int and explicit functions calls to main() are disallowed 

// void foo()
// {
//     main ();   //compile error, main not allowed to be called explicitly 

// }

// void main()
// {
//     foo(); //compile error : main not allowed to have non int return type 

// }//best practice is for the main function to return the value 0 if program ran normally (status code or exit code of 0)

#include <cstdlib> //for EXIT_SUCCESS and EXIT_FAILURE 

int main()
{
    return EXIT_SUCCESS;
    //to maximize portability you should only use 0 or EXIT_SUCCESS
}
