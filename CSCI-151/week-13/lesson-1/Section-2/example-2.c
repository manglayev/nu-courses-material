#include<stdio.h>

int main()
{
    int x = 10;
    printf("x = %d\n", x);
    printf("address of x = %p\n", &x);
    /*|x|0x7ffe8dc6a3a4|10| */
    /*
    int *p;
    p = &x;
    not *p = &x;
    */
    int *p = &x;
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);
    printf("address of x = %p\n", &x);
    printf("address of p = %p\n", &p);

    *p = 20;
    /*|x|0x7ffe8dc6a3a4|20|*/
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);
    printf("address of x = %p\n", &x);
    printf("address of p = %p\n", &p);

    int **pp = &p;
    printf("**pp = %d\n", **pp);
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);
    printf("address of x = %p\n", &x);
    printf("address of p = %p\n", &p);
    printf("address of pp = %p\n", pp);
    
    **pp = 30;
    printf("**pp = %d\n", **pp);
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);
    printf("address of x = %p\n", &x);
    printf("address of p = %p\n", &p);
    printf("address of pp = %p\n", pp);
    
    return 0;
}