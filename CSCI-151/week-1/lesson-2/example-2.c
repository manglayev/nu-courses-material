//swap the content of two variable x and y
#include "stdio.h"
#include "stdlib.h"
int main()
{
    int x = 5;
    int y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    
    // Swapping using a temporary variable
    int temp = x;
    x = y;
    y = temp;

    

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}