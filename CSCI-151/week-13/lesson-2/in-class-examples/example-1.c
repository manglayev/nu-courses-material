#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 5;
	int *array;
	// Dynamically allocate memory for n integers using malloc and sizeof
	array = (int *) malloc(n * sizeof(int));
	// Validate pointer against NULL
	if (array == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed using malloc.\n");
		exit(EXIT_FAILURE);
	}
	printf("Memory successfully allocated for %d integers.\n", n);
	// Fill array with values (10, 20, 30, 40, 50) using pointer arithmetic
	for (int i = 0; i < n; ++i)
	{
		*(array + i) = (i + 1) * 10;
	}
	// Display elements
	printf("Array elements:");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(array + i));
	}
	printf("\n");
	// Free allocated memory and reset pointer
	free(array);
	array = NULL;
	printf("Memory successfully freed.\n");
	return 0;
}
