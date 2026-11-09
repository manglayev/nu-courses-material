/*
F1 F2 F3      F4 	F5 			F6
      (F1+F2) (F3+F2)   (F4 + F3) 		(F5+F4)
			F3+F2 + F3
			F1+F2+F2 + F1+F2
			1 +1 +1  + 1 +1
1  1  2       3  	5  			8 ...
F(N) = F(N-1) + F(N-2)
*/
#include <stdio.h>
int Fibonacci(int N)
{
	if(N <= 2)
	{
		return 1;
	}
	else
	{
		printf("Fibonacci(%d) + Fibonacci(%d)\n", N-1, N-2);
		return Fibonacci(N - 1) + Fibonacci(N - 2); 
	}
}

int FibonacciLoop(int N)
{
	int previous = 1;
	int current = 1;
	int next = 1;

	for(int i = 3; i <= N; i++)
	{
		next = current + previous;
		previous = current;
		current = next;
	}

	return next;
}

int main()
{
	int N = 6;
	int F = Fibonacci(N);
	printf("The %dth member of Fibonacci series is %d\n", N, F);
	F = FibonacciLoop(N);
	printf("The %dth member of Fibonacci series found with loop is %d\n", N, F);
	return 0;
}
