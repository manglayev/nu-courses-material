#include <stdio.h>

int main()
{
	int a[10];
	int i;
	//initialize the array
	for(i = 0; i < 10; i++)
	{
		a[i] = i+i*3;
	}
	//Print elements of the array using for loop
	for(i = 0; i < 10; i++)
	{
		printf("a[%d] = %d ", i, a[i]);
	}
	printf("\n");
	//Print elements of the array using while loop
	int j = 0;
	while(j < 10)
	{
		printf("a[%d] = %d ",j , a[j]);
		j++;
	}
	printf("\n");
	//Linear search
	int n = 28;
	for(i = 0; i < 10; i++)
	{
		if(a[i] == n) 
		{
			printf("Number %d is found at index %d\n", n, i);
			break;
		}
		if(i == 9)
		{
			printf("Number %d is not found in the array\n", n);
		}
	}
	//Swapping elements
	//initial-> 0 4 8 12 16 20 24 28 32 36
	//NOW -> 36 4 8 12 16 20 24 28 32 0
	//final-> 36 32 28 24 20 16 12 8 4 0 
	
	//int temp = a[0];
	//a[0] = a[9];
	//a[9] = temp;
	//Sorting in reverse order	
	int temp;
	//i < 5 to run until half of the size of the array	
	for(i = 0; i < 5; i++)
	{
		temp = a[i];		
		a[i] = a[10-1-i];
		a[10-1-i] = temp;
		//print array at each step
		for(j = 0; j < 10; j++)
		{
			printf("a[%d] = %d ", j, a[j]);
		}
		printf("\n");
	}
	
	//Print elements of the array using for loop
	for(i = 0; i < 10; i++)
	{
		printf("a[%d] = %d ", i, a[i]);
	}
	printf("\n");
	return 0;
}
