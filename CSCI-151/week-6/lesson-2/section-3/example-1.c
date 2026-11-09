#include <stdio.h>

int main()
{
	int SIZE = 10;
	int a[SIZE];
	int i;
	for(i = 0; i < SIZE; i++)
	{
		a[i] = i+i*3;
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d ", i, a[i]);
	}
	printf("\n");
	//print the array elements using while loop
	int j = 0;
	while(j < SIZE)
	{
		printf("a[%d] = %d ", j, a[j]);
		j++;
	}
	printf("\n");
	//finding a number N in array using Linear search
//a[0] = 0 a[1] = 4 a[2] = 8 a[3] = 12 a[4] = 16
//a[5] = 20 a[6] = 24 a[7] = 28 a[8] = 32 a[9] = 36
	int N = 36;
	for(int i = 0; i < SIZE; i++)
	{
		if(a[i] == N)
		{
			printf("Number %d is found at index %d;\n", N, i);
			break;
		}
		if(i == SIZE - 1)
		{
			printf("Number %d is not found in the array\n", N);
		}
	}
	
	//swap elements and update elements of array in reverse order
//a[0] = 0 a[1] = 4 a[2] = 8 a[3] = 12 a[4] = 16 a[5] = 20 a[6] = 24 a[7] = 28 a[8] = 32 a[9] = 36	
//
	for(i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d ", i, a[i]);
	}
	printf("\n");
	int temp;
/*	
	int temp = a[0];
	a[0] = a[9];
	a[9] = temp;

	temp = a[1];
	a[1] = a[8];
	a[8] = temp;
*/
	for(i = 0; i < SIZE / 2; i++)
	{
		temp = a[i];
		a[i] = a[SIZE-1-i];
		a[SIZE-1-i] = temp;
		//print array again to see the swap in each iteration	
		for(j = 0; j < SIZE; j++)
		{
			printf("a[%d] = %d ", j, a[j]);
		}
		printf("\n");
	}

	for(i = 0; i < SIZE; i++)
	{
		printf("a[%d] = %d ", i, a[i]);
	}
	printf("\n");
	return 0;
}
