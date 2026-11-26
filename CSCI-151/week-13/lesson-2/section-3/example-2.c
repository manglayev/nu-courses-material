#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;
	int *mallocPtr;
	int *callocPtr;

	mallocPtr = (int *)malloc(n * sizeof(int));	
	callocPtr = (int *)calloc(n , sizeof(int));	

	if(mallocPtr == NULL || callocPtr == NULL)
	{
		printf("Error: Memory allocation failed.\n");
		if(mallocPtr) free(mallocPtr);
		if(callocPtr) free(callocPtr);
		return 1;
	}
	printf("Contents of malloc() allocation (uninitialized)\n");
	for(int i = 0; i < n; ++i)
	{
		printf("mallocPtr[%d] = %d\n", i, mallocPtr[i]);
	}
	printf("\nContents of calloc() allocation (uninitialized)\n");
	for(int i = 0; i < n; ++i)
	{
		printf("callocPtr[%d] = %d\n", i, callocPtr[i]);
	}
	
	/*
		fill the array then malloc and calloc again and print the values
	*/
	
	//Free both memory blocks
	free(mallocPtr);
	free(callocPtr);
	mallocPtr = NULL;
	callocPtr = NULL;
	printf("\nBoth memory blocks successfully freed\n");

	return 0;
}
