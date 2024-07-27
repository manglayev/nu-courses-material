#include <iostream>
#include "safe_int_array.h"

int main()
{
  safe_int_array array1 = {123, 456, 789};
  array1.print(std::cout);

  array1[1] = 33;
  array1.print(std::cout);

  safe_int_array array2(array1);
  array2.print(std::cout);
  array2[2] = array1[0] + 999;
  array2.print(std::cout);
}
