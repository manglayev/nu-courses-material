#include <stdio.h>

int main()
{
	int i1, i2;
	int *p1, *p2;

	i1 = 5;
	p1 = &i1;
	printf("i1 = %d, *p1 = %d\n", i1, *p1);  
	
	i2 = *p1 / 2 + 10;
	p2 = p1;

	printf("i1 = %d, i2 = %d, *p1 = %d, *p2 = %d\n", i1, i2, *p1, *p2 );  
	
	return 0;
}
