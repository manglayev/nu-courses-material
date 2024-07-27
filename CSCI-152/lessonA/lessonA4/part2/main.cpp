#include <iostream>
#include "safe_int_array.h"

int main()
{
  safe_int_array array1(3);

  array1.set_value(0, 123);
  array1.set_value(1, 456);
  array1.set_value(2, 789);

  array1.print(std::cout);

  safe_int_array array2(array1);
  array2.print(std::cout);

  safe_int_array array3(5);
  array3 = array1;
  array3.print(std::cout);
}
