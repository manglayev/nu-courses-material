#include <iostream>

void fun(int x, int *y)
{
  x = 333;
  *y = 444;
  std::cout<<"x = "<<x<<"; in fun "<<std::endl;
  std::cout<<"*y = "<<*y<<"; in fun"<<std::endl;
}

int main()
{
  int x = 111;
  int y = 222;

  fun(x, &y);

  std::cout<<"x = "<<x<<"; in main "<<std::endl;
  std::cout<<"y = "<<y<<"; in main "<<std::endl;
}
