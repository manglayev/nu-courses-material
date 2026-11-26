#include <stdio.h>
#include <stdlib.h>

struct Point
{
	int x;
	int y;
};

int main()
{
	struct Point *pointPtr;
	//Dynamically allocate space for one struct Point
	pointPtr = malloc(sizeof(struct Point));
	/*why we can skip the casting structPoint * as in the line above ?
	pointPtr = (structPoint *) malloc(sizeof(struct Point))
	*/
	if(pointPtr == NULL)
	{
		printf("Error: Dynamic allocation for struct Point failed.\n");
		return 1;
	}
	//access members using ->
	pointPtr -> x = 15;
	pointPtr -> y = 25;

	printf("Dynamically allocated point coordinates:\n");
	printf("Point X: %d\n", pointPtr->x);
	printf("Point Y: %d\n", pointPtr->y);

	//free allocated memory
	free(pointPtr);
	pointPtr = NULL;
	printf("Structure memory freed successfully.\n");
	return 0;
}
