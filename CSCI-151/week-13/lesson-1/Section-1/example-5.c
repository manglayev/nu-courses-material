/*Task 5. Write a program to concatenate two strings using pointers.*/
#include <stdio.h>

char* concatenate(char *str1, char *str2){
    int l1=0, l2=0;
    while(str1[l1]!='\0'){
        l1++;
    }
    while(str2[l2]!='\0'){
        l2++;
    }
    char result[l1+l2+1];
    for(int i = 0; i < l1; i++){
        result[i]=str1[i];
    }
    for(int i =l1; i < l1+l2+1; i++){
        result[i] = str2[i-l1];
    }
    str1=result;
    return str1;
}
int main(){
    char *str1 ="Hello";
    char *str2 =" World\n";
    printf("%s", concatenate(str1, str2));
}