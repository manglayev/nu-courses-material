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
	printf("Memory successfully allocated for %d integers\n", n);
	for(int i = 0; i < n; i++)
	{
		*(array + i) = (1 + i) * 10;
	}
	printf("Array elements:");
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", *(array + i));
	}
	printf("\n");
	free(array);
	//why would we need array = NULL ? 
	array = NULL;
	printf("Memory successfully freed.\n");
	
	return 0;
}
