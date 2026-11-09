#include <stdio.h>

/*
|1 2 2|				0 1 2 3 4 5 6 7 8
|9 5 7| is stored in memory as |1 2 2 9 5 7 8 3 2|
|8 3 2|
a[1][2] = 7
a[1][2] = [1 * 3 + 2 = 5] = 7
address = base address + (row index * number of columns + column index) x data type
base address a[0][0]
*/
/*not allowed 
void array_in_function(int array_in[rows][columns], int rows, int columns){
*/
void array_in_function(int rows, int columns, int array_in[][columns])
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
	//int array_out[rows][columns]= {{1, 2, 3}, {4, 5, 6}}; 
	//array_in_function(array_out, rows, columns);	
	for(int row = 0; row < rows; row++)
	{
		for(int column = 0; column < columns; column++)
		{
			array_out[row][column] = row + column;
		}
	}	

	array_in_function(rows, columns, array_out);
	return 0;
}
