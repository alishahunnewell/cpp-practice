//hello world program//
//preprocessor directive same as c++
#include <stdio.h>

int main(void)
{
    //uninitialized variable
    int i; //golds signed integers

    i = 2; //assigns value 2 into variable i

    char *s = "Hello, world!"; // char * (char pointer") is the string type 
    float f = 3.14; //holds signed floating point numbers
    // printf("Hello, World!\n"); 

    printf("%s i = %d and f = %f\n", s, i, f);

    int x = 1;
    if(x) {
        printf("x is true!\n");
    }
}