#include <stdio.h>


void solveTowers(const int n, char source, char destination, char spare)
{
	printf("receive: solveTowers(n=%d,source=%c;destination=%c,spare=%c)\n", n, source, destination, spare);
	if(n == 1)
	{
		printf("move top disk from %c to tower %c\n", source, destination);
	}
	else
	{
		
		printf("call: solveTowers(%d, %c, %c, %c)\n", n-1, source, spare, destination);
		solveTowers(n-1, source, spare, destination);
		printf("call: solveTowers(%d, %c, %c, %c)\n", 1, source, destination, spare);
		solveTowers(1, source, destination, spare);
		printf("call: solveTowers(%d, %c, %c, %c)\n", n-1, spare, destination, source);
		solveTowers(n-1, spare, destination, source);
	}
}

int main()
{
	int n = 3;
	printf("call: solveTowers(%d, %c, %c, %c)\n", n, 'A', 'B', 'C');
	solveTowers(n, 'A', 'B', 'C');
	return 0;
}
