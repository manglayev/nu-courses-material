#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;
	int *array;
	array = (int *) malloc(n * sizeof(int));	
	if(array == NULL)
	{
		printf("Error: Memory allocation failed using malloc.\n");
		return 1;
	}
	printf("Memory successfully allocated for %d integers.\n", n);
	//Fill the array with values 10 20 30 40 50 using pointer arithmetics
	for(int i = 0; i < n; ++i)
	{
		*(array + i) = (i + 1) * 10;
	}
	printf("Array elements:\n");
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", *(array + i));
	}
	printf("\n");
	free(array);
	array = NULL;
	printf("Memory successfully freed\n");
	return 0;
}
