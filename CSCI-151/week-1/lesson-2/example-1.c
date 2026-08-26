#include "stdlib.h"
#include "stdio.h"

/*
write a program to evaluate a polynomial
a * x^3 + b * x^2 + c * x + d
*/

int main()
{
    int a = 2;
    int b = 4;
    int c = 2;
    int d = 5;

    int x = 3;
    int x_squared = x * x; // x squared
    //is better than x = 9;
    int x_cubed = x_squared * x; // x cubed
    int result = a * x * x * x + b * x * x + c * x + d;
    printf("The result of the polynomial for x = 3 is: %i\n", result);
    x = 0;
    printf("The result of the polynomial for x = 3 is: %d\n", result);
    return 0;
}