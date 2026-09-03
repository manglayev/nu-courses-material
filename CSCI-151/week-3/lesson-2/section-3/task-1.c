/*
Calculate the sum of the alternating series S = 1 - 2 + 3 - 4 + 5 - 6 up to N = 6 using a single for loop. You cannot use any conditional checks. You must update a sign multiplier variable directly inside the loop's update field.
*/

#include <stdio.h>
int main()
{
	int N = 6;
	int S = 0;

	for(int i = 1, sign = 1; i <= N; i++, sign *= -1)
	{
		printf("iteration %d\n", i);
		printf("i = %d, S = %d, sign = %d\n", i, S, sign);
		printf("S = %d + %d * %d\n", S, i, sign );
		S+=i*sign;
		printf("S = %d\n", S);
		/*
		S = S + i*sign
		sign = sign * (-1)
		iteration 1
		i = 1, S = 0, sign = 1
		S = 0 + 1 * 1 = 1
		iteration 2
		i = 2, S = 1, sign = 1*(-1) = -1
		S = 1 + 2 * (-1) = -1
		iteration 3
		i = 3, S = -1, sign = (-1) * (-1) = 1
		S = -1 + 3 * 1 = 2
		iteration 4
		i = 4, S = 2, sign = 1*(-1) = -1
		S = 2 + 4 * (-1) = -2
		iteration 5
		i = 5, S = -2, sign = (-1) * (-1) = 1
		S = -2 + 5 * 1 = 3
		iteration 6
		i = 6, S = 3, sign = 1*(-1) = -1
		S = 3 + 6 * (-1) = -3
		*/
	}
	printf("S = %d\n", S);
	return 0;
}
