#include <stdio.h>
unsigned long int factorial(unsigned int n)
{
    unsigned long int result;
    if (n == 0)
    {
        result = 1;
    }
    else
    {
        //printf("factorial(%u) = factorial(%u) * %u\n", n, n-1, n);
        result = n * factorial(n - 1);
    }
    return result;
}
int main()
{
    //printf("%lu\n", factorial(4));
    printf("%lu\n", factorial(4));
    return 0;
}
/*
= factorial(4)
= 4 * factorial(3)
= 3 * factorial(2)
= 2 * factorial(1)
= 1 * factorial(0)
= 1
*/