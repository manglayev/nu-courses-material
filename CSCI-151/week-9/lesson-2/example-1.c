#include <stdio.h>

int main()
{
	int a[5] = {1, 3, 5, 2, 4};
	
	for(int i = 0; i < 5; i++)
	{
		a[i] = i + i -1; 
	}
	for(int i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	int sum = 0;
	for(int i = 0; i < 5; i++)
	{
		sum = sum + a[i];
	}
	printf("sum = %d\n", sum);
	int min = a[0];
	for(int i = 1; i < 5; i++)
	{
		if(min < a[i])
			min = a[i];
	}
	printf("min = %d\n", min);
	
	int max = a[0];
	for(int i = 1; i < 5; i++)
	{
		if(max > a[i])
			max = a[i];
	}
	printf("max = %d\n", max);
	for(int i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");	
	return 0;
}
