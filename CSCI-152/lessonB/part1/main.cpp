#include <iostream>
#include "stack.h"

int main()
{

  stack stack1 {1, 2, 3, 4};
  stack stack2;

  stack2.push(5);
  stack2.push(6);
  stack2.push(7);

  int val = stack2.peek();
  std::cout<<"I saw "<<val<<" on stack2"<<std::endl;

  stack stack3(stack2);
  stack2.pop();

  std::cout<<stack1<<std::endl;
  std::cout<<stack2<<std::endl;
  std::cout<<stack3<<std::endl;
  //wrong implementation to break the stack
  /*
  stack stack1 {1, 2, 3, 4};

  stack1.push(5);
  stack1.push(600);
  stack1.push(745);
  stack1.push(127);
  std::cout<<stack1<<std::endl;
  */
  return 0;
}
