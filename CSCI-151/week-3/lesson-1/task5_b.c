#include <stdio.h>
int main()
{
    int x=1234;
    while(x>0)
    {
        printf("%i\n", x%10);
        x=x/10;
    }
    return 0;
}