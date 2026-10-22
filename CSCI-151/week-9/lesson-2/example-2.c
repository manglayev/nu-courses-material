#include <stdio.h>
int size = 5;

void fill_array(int array_1[])
{
	for(int i = 0; i < size; i++)
	{
		array_1[i] = i + i - 1;
	}
}

void print_array(int array_1[])
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", array_1[i]);
	}
	printf("\n");

}

int sum_array(int array_1[])
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum = sum + array_1[i];
	}
	return sum;
}

float average_array(int array_1[])
{
	/*
	int sum = sum_array(array_1);
	float average = sum / size;
	return average;
	*/
	return sum_array(array_1)/(float)size;
}

int minimum_array(int array_1[])
{
	int min = array_1[0];
	for(int i = 1; i < size; i++)
	{
		if(min > array_1[i])
			min = array_1[i];
	}
	return min;
}

int maximum_array(int array_1[])
{
	int max = array_1[0];
	for(int i = 1; i < size; i++)
	{
		if(max < array_1[i])
			max = array_1[i];
	}
	return max;
}
int main()
{
	int array_1[] = {1, 3, 5, 2, 4};
	print_array(array_1);
	fill_array(array_1);
	print_array(array_1);

	int sum = sum_array(array_1);
	printf("sum = %d; ", sum);
	printf("sum = %d;\n", sum_array(array_1));
	
	float average = average_array(array_1);
	printf("average = %.2f; ", average);
	printf("average = %.2f;\n", average_array(array_1));
	
	int min = minimum_array(array_1);
	printf("min = %d; ", min);
	printf("min = %d;\n", minimum_array(array_1));
	
	int max = maximum_array(array_1);
	printf("max = %d; ", max);
	printf("max = %d;\n", maximum_array(array_1));

	return 0;
}
