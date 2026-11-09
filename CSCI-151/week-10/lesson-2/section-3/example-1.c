/*
F1 F2 F3      F4       F5                                ... FN
      F1 + F2 F3 + F2  (F(5-1) + F(5-2) = F4 + F3 )      (F(N-1) + F(N-2))
				  F5
                               F4 +     F3    
        		    F3 	+ F2  + F3
                          F1  F2  F2  F1  F2
1  1  2       3        5 (1 + 1 + 1 + 1 + 1)
F = (F-1) + (F-2);
*/

#include <stdio.h>

int Fibonacci(int i)
{
	if(i <= 2)
	{
		return 1;
	}
	else
	{
		printf("Fibonacci (%d) + Fibonacci(%d)\n", i-1, i-2);
		return Fibonacci(i-1) + Fibonacci(i-2);
	}
}

int FibonacciLoop(int i)
{
	int f1 = 1;
	int f2 = 1;
	int fN = 1;

	for(int j = 3; j <= i; j++)
	{
		fN = f1 + f2;
		f1 = f2;
		f2 = fN;
	}
	return fN;
}

int main()
{
	int i = 6;
	int n = Fibonacci(i);
	printf("%dth member of Fibonacci series is %d\n", i, n);
	
	n = FibonacciLoop(i);
	printf("%dth member of Fibonacci series found with loop is %d\n", i, n);
	return 0;
}

