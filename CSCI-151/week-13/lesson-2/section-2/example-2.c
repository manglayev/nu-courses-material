#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;
	int *mallocPtr;
	int *callocPtr;
	mallocPtr = (int *) malloc(n * sizeof(int));
	callocPtr = (int *) calloc(n, sizeof(int));
	
	if(mallocPtr == NULL || callocPtr == NULL)
	{
		printf("Error: Memory allocation failed\n");
		if(mallocPtr) free(mallocPtr);
		if(callocPtr) free(mallocPtr);
		return 1; 
	}
	printf("contents of malloc\n");
	for(int i = 0; i < n; ++i)
	{
		printf("mallocPtr[%d] = %d; ", i, mallocPtr[i]);
	}
	printf("\ncontents of calloc\n");
	for(int i = 0; i < n; ++i)
	{
		printf("callocPtr[%d] = %d; ", i, callocPtr[i]);
	}
	printf("\n");
	printf("initialize 3 elements of the arrays");
	for(int i = 0; i < n/2 + 1; ++i)
	{
		*(mallocPtr + i) = (i + 1) * 10;
		*(callocPtr + i) = (i + 1) * 15;
	}
	printf("contents of malloc\n");
	for(int i = 0; i < n; ++i)
	{
		printf("mallocPtr[%d] = %d; ", i, mallocPtr[i]);
	}
	printf("\ncontents of calloc\n");
	for(int i = 0; i < n; ++i)
	{
		printf("callocPtr[%d] = %d; ", i, callocPtr[i]);
	}
	printf("\n");
	mallocPtr = (int *) malloc(n * sizeof(int));
	callocPtr = (int *) calloc(n, sizeof(int));
	
	printf("contents of malloc\n");
	for(int i = 0; i < n; ++i)
	{
		printf("mallocPtr[%d] = %d; ", i, mallocPtr[i]);
	}
	printf("\ncontents of calloc\n");
	for(int i = 0; i < n; ++i)
	{
		printf("callocPtr[%d] = %d; ", i, callocPtr[i]);
	}
	printf("\n");

	//freee
	free(mallocPtr);
	free(callocPtr);
	mallocPtr = NULL;
	callocPtr = NULL;
	printf("\nBoth memory blocks successfully freed.\n");
	return 0;
}
