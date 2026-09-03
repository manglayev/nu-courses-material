/*
Challenge: Print a multiplication table for a 3 times 3 grid, 
but only calculate and print values where the row index is greater than or equal to the column index (e.g., lower-triangular).
You must do this without checking if the indices are equal; control the execution strictly through the inner loop's boundary condition.
*/
#include <stdio.h>

int main()
{
    	for (int row = 1; row <= 3; ++row) 
	{
        	for (int col = 1; col <= row; ++col) 
		{
            		printf("%3i ", row * col); 
        	}
        	printf("\n");
  	}
	return 0;
}
