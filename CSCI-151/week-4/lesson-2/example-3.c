#include <stdio.h>

int main(void) 
{
	int n = 1300;
	int steps = 0;
	printf("Starting the sequence for: %i\n", n);
	while (n != 1)
	{
		steps++;
		if (steps > 100)
		{
			printf("Safety limit hit! Terminating.\n");
			break; // Force break out of while loop
		}
		n = (n % 2 == 0) ? (n / 2) : (3 * n + 1);
		printf("Step %i: Current Value = %i\n", steps, n);
	}
	printf("Reached 1 in %i steps.\n", steps);
	return 0;
}
