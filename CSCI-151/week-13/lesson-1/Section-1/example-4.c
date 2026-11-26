#include <stdio.h>
#include <string.h>

/*
Task 2. 
Print the elements of array numbers
using pointer/offset notation with the pointer nPtr.
*/

int main() {
    int a[10];
    for(int i=0; i<10; i++)
        a[i]=(i*37)%53;

    int *nPtr=a;
    for(int i=0; i<10; i++)
    {
        printf("%i ",*nPtr);
        nPtr++;
    }
    printf("\n");
    return 0;
}