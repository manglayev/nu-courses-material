#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;

    *p
     a 
    |1|2|3|4|5|
    while (*p != '\0')
    {
        printf("%i ", *p);
        *p++;
    }
    return 0;
}