#include <stdio.h>

int main()
{
	int ROWS = 5;
	int COLUMNS = 5;
	int a[ROWS][COLUMNS];
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLUMNS; j++)
		{
			a[i][j] = i*2 + j*3;
		}
	}	
	for(int i = 0; i < ROWS; i++)
	{

		for(int j = 0; j < COLUMNS; j++)
		{
			printf("a[%d][%d] = %d; ", i, j, a[i][j]);
		}
		printf("\n");
	}
	int ROW_MAX = a[0][0]; 
	int COL_MAX = a[0][0];

	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLUMNS; j++)
		{
			if(a[i][j] > ROW_MAX)
			{
				ROW_MAX = a[i][j];
			}
			if(a[j][i] > COL_MAX)
			{
				COL_MAX = a[j][i];
			}
		}
		printf("Maximum element in row %d is %d\n", i, ROW_MAX);		
		printf("Maximum element in col %d is %d\n", i, COL_MAX);		
	}	
	printf("\n");
	return 0;
}
