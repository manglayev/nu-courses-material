#include <iostream>

int main()
{
  int x = 1;
  int &y = x;

  y = 2;
  std::cout<<"x = "<<x<<"; y = "<<y<<"\n"<<std::endl;

  int z = 3;
  y = z;
  z = 4;
  std::cout<<"x = "<<x<<"; y = "<<y<<"; z = "<<z<<std::endl;
}
