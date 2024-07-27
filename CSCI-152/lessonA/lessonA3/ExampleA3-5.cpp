#include <iostream>

void print(const int arrayInPrint[], size_t size)
{
  for(size_t i = 0; i < size; ++i)
  {
    std::cout << arrayInPrint[i]<<" ";
  }
  std::cout<<std::endl;
}

int& access(int arrayInAccess[], size_t index)
{
  return arrayInAccess[index];
}

int main()
{
  int array[] {1, 2, 3, 4, 5};
  print(array, 5);
  access(array, 3) = 6;
  print(array, 5);
}
