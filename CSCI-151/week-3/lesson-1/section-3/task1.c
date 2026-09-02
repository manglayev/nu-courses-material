/*
Write a program that calculates the squares and cubes of the numbers from 0 to 10 
and uses tabs to print the following table of values:
<LINELENGTH>50</LINELENGTH>
number  square  cube
0       0       0
1       1       1
*/
#include <stdio.h>

int main(){
    printf("number  square  cube\n");
    for(int i = 0; i <= 10; i++){
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}