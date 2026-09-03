/*
Write a program that counts the number of digits in an integer using a do while loop.
Ensure that value 0 is correctly evaluated as having exactly 1 digit 
without using an if statement.
*/
#include <stdio.h>

int main()
{

	int count=0;
 	int num = 0;
	do {
	num/=10;
	count++;
	} while(num>0);
 
	printf("%i\n",count);	
	return 0;
}
