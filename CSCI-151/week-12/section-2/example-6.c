#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int a[], int n)
{
	int i, j, temp;
	for(i = 0; i < n - 1; ++i)
		for(j = i + 1; j < n; ++j)
			if(a[i] > a[j])
			{
				swap(&a[i], &a[j]);
			}
}


int main()
{
	int i;
	int array[10] = {45, 5, 852, -9, 21, 21, 1, -2, 77, 1025};
	
	printf("The array before the sort:\n");
	for(i = 0; i < 10; i++)
		printf("%i ", array[i]);

	sort(array, 10);

	printf("\n\nThe array after the sort:\n");
	for(i = 0; i < 10; i++)
		printf("%i ", array[i]);

	printf("\n");
	
	return 0;
}
