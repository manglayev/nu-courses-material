#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct Point
{
	int x;
	int y;
};
int main(void)
{
	struct Point *pointPtr;
	// Dynamically allocate space for one struct Point
	pointPtr = (struct Point *) malloc(sizeof(struct Point));
	// Validate memory allocation
	if (pointPtr == NULL)
	{
		fprintf(stderr, "Error: Dynamic allocation for struct Point failed.\n");
		exit(EXIT_FAILURE);
	}
	// Access structure members using arrow operator (->)
	pointPtr->x = 15;
	pointPtr->y = 25;
	
	printf("Dynamically Allocated Point Coordinates:\n");
	printf("Point X: %d\n", pointPtr->x);
	printf("Point Y: %d\n", pointPtr->y);

	// Free allocated structure memory

	free(pointPtr);
	pointPtr = NULL;
	printf("Structure memory freed successfully.\n");
	return 0;
}
