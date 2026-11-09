#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 5;
	int *mallocPtr;
	int *callocPtr;
	// Allocate 5 integers with malloc (uninitialized)
	mallocPtr = (int *) malloc(n * sizeof(int));
	// Allocate 5 integers with calloc (zero-initialized)
	callocPtr = (int *) calloc(n, sizeof(int));
	if (mallocPtr == NULL || callocPtr == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed.\n");
		if (mallocPtr) free(mallocPtr);
		if (callocPtr) free(callocPtr);
		exit(EXIT_FAILURE);
	}
	printf("--- Contents of malloc() allocation (uninitialized) ---\n");
	for (int i = 0; i < n; ++i)
	{
		printf("mallocPtr[%d] = %d\n", i, mallocPtr[i]);
	}
	printf("\n--- Contents of calloc() allocation (zero-initialized) ---\n");
	for (int i = 0; i < n; ++i)
	{
		printf("callocPtr[%d] = %d\n", i, callocPtr[i]);
	}
	// Free both memory blocks
	free(mallocPtr);
	free(callocPtr);
	mallocPtr = NULL;
	callocPtr = NULL;
	printf("\nBoth memory blocks successfully freed.\n");
	return 0;
}
