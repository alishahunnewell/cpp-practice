#include <stdio.h>
#include <math.h>


// the ternary operator is an expression whose value depends on
//result of conditional embedded in it , for ex if we wanted;

//if x > 10, add 17 to y, otherwise add 37 to y
int main(void)
{
    int x = 0;
    int y = 0;
    y += x < 10? 17 : 37;

    printf("y = %i\n", y);

    return 0;

}