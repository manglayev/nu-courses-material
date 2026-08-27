/*
number-1 = 1234

Part 1.
Print every digit of the number-1.

Part 2.
Print the decimal, octal and hexademical of the nubmer-1.

*/

#include <stdio.h>

int main()
{
int number_1 = 1234;
printf("given number = %d\n", number_1);
printf("digit 1 = %d\n", number_1 % 10);
printf("digit 2 = %d\n", number_1 / 10 % 10 );
printf("digit 3 = %d\n", number_1 / 100 % 10 );
printf("digit 4 = %d\n", number_1 / 1000 % 10 );
return 0;
}
