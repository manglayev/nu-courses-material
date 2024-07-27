#include <iostream>

int& moreFun(int& w)
{
  w = 2;
  return w;
}

int main()
{
  int x = 1;
  int& y = x;
  int& z = moreFun(y);

  std::cout<<" x = "<<x<<"; y = "<<y<<"; z = "<<z<<std::endl;
  y = 3;
  std::cout<<" x = "<<x<<"; y = "<<y<<"; z = "<<z<<std::endl;
  z = 4;
  std::cout<<" x = "<<x<<"; y = "<<y<<"; z = "<<z<<std::endl;
  x = 5;
  std::cout<<" x = "<<x<<"; y = "<<y<<"; z = "<<z<<std::endl;
}
