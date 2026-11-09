#include <stdio.h>

int Fibonacci(int n)
{
	if(n <= 2)
	{
		return 1;	
	}
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int main()
{
	printf("%d\n", Fibonacci(6));
	return 0;
}
