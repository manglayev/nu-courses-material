/*
 Declare a new function and two int variables. Make one of them static.
 Print the values and increment both variables inside the function.
 Call the function 3 times.
*/
#include <stdio.h>

void function_1 ()
{
	int array_1[] = {1, 2, 3};
	int static a = 1;
	int b = 1;
	printf("a = %d; b = %d; array_1[0] = %d; \n", a, b, array_1[0]);
	a++;
	b++;
	array_1[0]++;
}

int main()
{
	function_1();
	function_1();
	function_1();
	
	return 0;
}
