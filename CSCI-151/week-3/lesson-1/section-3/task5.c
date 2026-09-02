#include <stdio.h>

int main()
{

    //for(int i=2; i<=10; i+=2)
    
    int num=1234, i=1;
    while(i<=1000)
    {
        printf("%i\n", (num / i) % 10);
        i = i * 10;
    }
}