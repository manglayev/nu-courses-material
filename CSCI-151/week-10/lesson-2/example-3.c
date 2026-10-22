#include <stdio.h>

void solveTowers(int n, char source, char destination, char spare)
{
	if(n == 1)
	{
		printf("move top disk from %c to tower %c\n", source, destination);
	}
	else
	{
		solveTowers(n-1, source, spare, destination);
		solveTowers(1, source, destination, spare);
		solveTowers(n-1, spare, destination, source);
	}
}

int main()
{
	solveTowers(3, 'A', 'B', 'C');
	return 0;
}
