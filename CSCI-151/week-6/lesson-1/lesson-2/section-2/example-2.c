#include <stdio.h>

int main()
{
	int N = 6;
	int a[N][N];
	int i, j;
	//initialize the array
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			a[i][j] = i*2+j*3;
		}
	}
	//Print elements of the array using for loop
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			printf("a[%d][%d] = %d ",i, j, a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
