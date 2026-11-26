#include <stdio.h>

int main()
{
    int x = 10;
    printf("x = %d\n", x);
    printf("address of x = %p\n", &x);
/* error: assignment to ‘int’ from ‘int *’ makes integer from pointer without a cast */
    int *p = &x;
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("address of x = %p\n", &x);
    printf("address of p = %p\n", &p);
    
    *p = 20;
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("address of x = %p\n", &x);
    printf("address of p = %p\n", &p);

    int **pp = &p;
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
    printf("address of x = %p\n", &x);
    printf("address of p = %p\n", &p);
    printf("address of pp = %p\n", &pp);

    **pp = 30;
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
    printf("address of x = %p\n", &x);
    printf("address of p = %p\n", &p);
    printf("address of pp = %p\n", &pp);
    
    return 0;
}