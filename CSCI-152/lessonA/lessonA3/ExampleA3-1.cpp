#include <iostream>

int main()
{
  int x = 12;
  int y = 45;

  int *p1 = &x;
  int *p2 = p1;

  *p1 = 67;
  //std::cout<<"x = "<<x<<"; *p1 = "<<*p1<<std::endl;
  std::cout<<"x = "<<x<<"; &x = "<<&x<<"; *p1 = "<<*p1<<"; *p2 = "<<*p2<<std::endl;
  p2 = &y;
  //std::cout<<"y = "<<y<<"; *p2 = "<<*p2<<std::endl;
  std::cout<<"y = "<<y<<"; &y = "<<&y<<"; *p2 = "<<*p2<<std::endl;
}
