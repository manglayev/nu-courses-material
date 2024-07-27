#include <iostream>

void swap(int& x, int& y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main()
{
  int a = 1;
  int b = 2;
  std::cout<<"a = "<<a<<"; b = "<<b<<std::endl;
  swap(a, b);
  std::cout<<"a = "<<a<<"; b = "<<b<<std::endl;
}
