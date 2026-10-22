#include <stdio.h>
int size = 5;

void fill_array(int array_local[])
{
	for(int i = 0; i < size; i++)
	{
		array_local[i] = i + i - 1;
	}
}

void print_array(int array_local[])
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", array_local[i]);
	}
	printf("\n");		
}

int sum_array(int array_local[])
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum = sum + array_local[i];
	}
	return sum;
}

float average_array(int array_local[])
{
/*
	float average = 0;
	int sum = sum_array(array_local);
	average = sum / 5.0;
	return average;
*/
	return sum_array(array_local)/(float)size;
}

int minimum_array(int array_local[])
{
	int min = array_local[0];
	for(int i = 1; i < size; i++)
	{
		if(array_local[i] < min)
			min = array_local[i];
	}
	return min;
}

int maximum_array(int array_local[])
{
	int max = array_local[0];
	for(int i = 1; i < size; i++)
	{
		if(array_local[i] > max)
			max = array_local[i];
	}
	return max;
}
int main()
{
	int array_1[] = {1, 3, 5, 2, 4};
	print_array(array_1);
	fill_array(array_1);
	print_array(array_1);
	/*
	int sum = sum_array(array_1);
	printf("sum = %d; ", sum);
	*/
	printf("sum = %d; ", sum_array(array_1));
	
	printf("average = %.2f; ", average_array(array_1));
	printf("min = %d; ", minimum_array(array_1));
	printf("max = %d; ", maximum_array(array_1));
	
	printf("\n");
	return 0;
}
