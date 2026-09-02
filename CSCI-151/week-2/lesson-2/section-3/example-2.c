/*
 Given the number 1234 print out every digit separately
 */
#include <stdio.h>

int main()
{
	int number = 1234;
	
	printf("number = %d\n", number);

	printf("digit 1 = %d\n", number % 10);
	printf("digit 2 = %d\n", number % 100 / 10);
	printf("digit 3 = %d\n", number % 1000 / 100);
	printf("digit 4 = %d\n", number / 1000);

	return 0;
}
