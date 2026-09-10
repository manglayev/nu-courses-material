/*
Collatz Conjecture Step Tracker (Conditional Operator + while + break)
Track the step sequence for a starting positive integer n = 13, printing each value until the sequence converges to 1. Loop Structure: Use a while loop running as long as n is not equal to 1. Branchless Step Formula: Inside the loop, update the value of n using a single ternary conditional operator expression: if n is even, divide by 2; otherwise, multiply by 3 and add 1. Infinite Loop Prevention: Incorporate a step counter. If the number of steps exceeds 100, execute a break statement to force-terminate the loop as a safety mechanism.
*/
#include <stdio.h>

int main()
{
	int n = 1300;
	int steps = 0;
	printf("Starting the sequence for %i\n", n);
	while(n != 1)
	{
		steps++;
		if (steps > 100)
		{
			printf("Exiting the loop. Safety limit\n");
			break;
		}
		n = (n % 2 == 0) ? (n / 2) : (3 * n + 1);
		printf("Step %d: Current value = %d\n", steps, n);
	}
	if(steps <= 100)
		printf("Reached 1 in %d steps\n", steps);
	return 0;
}
