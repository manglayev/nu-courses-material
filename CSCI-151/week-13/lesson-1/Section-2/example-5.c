#include <stdio.h>

int main()
{
    int b = 20;
    int x;
    int *ip2 = &x;
    int **ipp = &ip2;
    **ipp = 88;
    printf("**ipp = %d; *ip2 = %d; x = %d; &b = %p\n", **ipp, *ip2, x, &b);
    *ipp = &b;
    // int *ip2 = &b;
    //**ipp->*ip2->x
    
    */
     printf("**ipp = %d; *ip2 = %d; x = %d; b = %d\n", **ipp, *ip2, x, b);
    return 0;
}