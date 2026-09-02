/*
Task-2
Write a program that reads in the side of a square and then prints that square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For example, if your program reads a size of 4, it should print
<LINELENGTH>50</LINELENGTH>
****
****
****
****
*/

#include <stdio.h>

int main(){
    int x;
    printf("Enter the side of a square: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= x; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}