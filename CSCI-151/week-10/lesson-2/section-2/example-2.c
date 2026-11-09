#include <stdio.h>

void solveTowers(int count, char source, char destination, char spare)
{
	if (count == 1)
	{
		printf("move top disk from pole %c to pole %c\n", source, destination);
	}
	else
	{
		solveTowers(count - 1, source, spare, destination);
		solveTowers(1, source, destination, spare);
		solveTowers(count - 1, spare, destination, source); 
	}
}

int main()
{
	solveTowers(3, 'A', 'B', 'C');
	return 0;
}
