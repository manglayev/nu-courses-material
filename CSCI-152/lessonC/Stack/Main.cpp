#include <iostream>
#include "Stack.h"

int main()
{
  Stack stack1;
  stack1.push(51);
  stack1.push(600);
  stack1.push(745);
  stack1.push(127);

  stack1.outputValues();
  stack1.pop();
  stack1.outputValues();
  std::cout<<"\n";

  return 0;
}
