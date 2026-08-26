/*
Task 2
Write a program where the user is prompted to enter two integers. The message should warn that the first number is larger than the second number. Then the program performs four operations: addition, subtraction, multiplication and division. Print the header message above each operation with the results.
*/

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Please enter two numbers where the first is bigger than second (pls)\n");
	scanf("%d %d", &a, &b);
	printf("\n");
	
	printf("a + b = %d \na - b = %d \na * b = %d \na / b = %g \n", a + b, a - b, a * b, (double) a / b);
	
	return 0;
}
