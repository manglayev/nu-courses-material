#include <stdio.h>
#include <stdlib.h>

struct Point
{
	int x;
	int y;
};

int main(void)
{
	/*		
	struct Point structPoint = {Point.x = 15, Point.y = 25};
	int array[] = {15, 25};
	int *array;
	*/
	/*
	int x = 10;
	int *p = &x;
	*p = 20;
	//p	 = (int *)malloc(sizeof(int));
	*/
	struct Point *pointPtr;
	pointPtr = (struct Point *) malloc(sizeof(struct Point));
	if(pointPtr == NULL)
	{
		printf("Error: Dynamic allocation for struct point failed.\n");
		return 1;
	}
	pointPtr -> x = 15;
	pointPtr -> y = 25;

	printf("Dynamically allocated Point Coordinates:\n");
	printf("Point X: %d\n", pointPtr -> x);
	printf("Point Y: %d\n", pointPtr -> y);

	free(pointPtr);
	pointPtr = NULL;
	printf("Structure memory freed.\n");
	return 0;
}
