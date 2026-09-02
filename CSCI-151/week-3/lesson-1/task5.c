// Task 5. Given the number 1234 print out every digit separately using the while loop.
#include <stdio.h>
int main() {
  int n=1234;
  while(n!=0)
  {
    printf("%i",n%10);
    n=n/10;
  }
  printf("\n");
  return 0;
}
