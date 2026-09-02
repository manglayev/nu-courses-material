// Write a program that calculates and prints the sum of even numbers from 2 to 10 (inclusive) using a single for loop.

#include <stdio.h>

int main() {
  int i, sum = 0;
  for (i = 2; i <= 10; i += 2) {
    sum += i; // sum = sum + i;
  }
  printf("The sum of even numbers from 2 to 10 is %i\n", sum);
  return 0;
}
