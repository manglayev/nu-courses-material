/*
Example 5
Write a program that counts the number of digits in an integer using a do while loop. Ensure that value 0 is correctly evaluated as having exactly 1 digit without using an if statement.
*/
#include <stdio.h>

int main()
{
	int N = 0;
	int digits = 0;
	
	do
	{
		digits++;
		N /= 10;
	}
	while(N != 0);
	
	printf("There are %d digits\n", digits);
	return 0;
}	
