#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int a[], int size)
{
	int temp;
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(a[i] > a[j])
			{
				swap(&a[i], &a[j]);
				/*	
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				*/
			}
		}
	}
}

int main()
{
	int i;
	int const size = 10;
	int array[] = {45, 95, 1 , -96, -852, 2000, 45, 123, 85, 10};
	
	printf("The array before the sort:\n");
	for(i = 0; i < size; i++)
	{
		printf("%i ", array[i]);	
	}
	printf("\n");

	sort(array, size);

	printf("\n\nThe array after the sort:\n");
	for(i = 0; i < size; i++)
	{
		printf("%i ", array[i]);	
	}
	printf("\n");

	return 0;
}
