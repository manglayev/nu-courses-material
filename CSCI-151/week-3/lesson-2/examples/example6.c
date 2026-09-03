/*
Write a program that counts the number of digits in an integer val = 0 using a do loop.
Ensure that 0 is correctly evaluated as having exactly 1 digit without using an if statement.  
A value can be negative, positive or 0.
*/

#include <stdio.h>

int main()
{
    int val = 123;
    int digits = 0;

    printf("Original value: %i\n", val);

    int isNegative = (val < 0); 
    val = val * (1 - 2 * isNegative); 

    do {
        digits++;
        val /= 10; 
    } while (val > 0);

    printf("Number of digits: %i\n", digits);

    return 0;
}
