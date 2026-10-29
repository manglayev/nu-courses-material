#include <stdio.h>

/* not allowed: void array_in (int array_in[][rows], int rows, int columns)*/
void array_in (int rows, int columns, int array_in[][columns])
{
	for(int row = 0; row < rows; row++)
	{
		for(int column = 0; column < columns; column++)
		{
			printf("a[%d][%d] = %d ", row, column, array_in[row][column]);
		}
		printf("\n");
	}
}

int main()
{
	int rows = 2;
	int columns = 3;
	int array_out[rows][columns];

	for(int row = 0; row < rows; row++)
	{
		for(int column = 0; column < columns; column++)
		{
			array_out[row][column] = row + column;
		}
	}

	/*
	not allowed:
	int array_out[rows][columns] = {{1, 2, 3},{4, 5, 6}}
	or
	array_in(array_out, rows, columns);
	*/	
	array_in(rows, columns, array_out);
	return 0;
}
