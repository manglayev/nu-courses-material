#include <stdio.h>
int main()
{
  int Money;
  printf("Enter your current balance in KZT: ");
  scanf("%i", &Money);
  int Price = 453;
  int Kilos = Money / Price;
  int Change = Money % Price;
  printf("Kilos of apples available for purchase - %i kg \nChange - %i KZT\n", Kilos, Change);
  return 0;
}
