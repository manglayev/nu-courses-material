/*
Example-5: Zero-Safe Digit Counter
Write a program that counts the number of digits in an integer val = 0 using a do while loop.
Ensure that 0 is correctly evaluated as having exactly 1 digit without using an if statement.
*/

#include <stdio.h>

int main()
{
    int val = 120;
    int digits = 0;
    do{
        digits++;
        val /= 10;
    } while (val > 0);
    printf("(Digit Count of 0): %i\n", digits);
return 0;
}
