/*
Example-1. Branchless Alternating Sign Summation Concept: The for loop allows multiple variables to be initialized 
and updated simultaneously by separating expressions with commas.
Challenge: Calculate the sum of the alternating series S = 1 - 2 + 3 - 4 + 5 - 6 up to N = 6 using a single for loop.
You cannot use any conditional checks. You must update a sign multiplier variable directly inside the loop's update field.
*/
#include <stdio.h>
int main()
{
	int N = 6;
	int S = 0;
	for(int i = 1, sign = 1; i <= N; i++, sign = -sign)
	{
		S+=i * sign;
	}
	printf("The alternating Sum of %i = %i\n", N, S);
	return 0;
}


