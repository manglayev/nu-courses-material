#include <iostream>
#include "queue.h"

int main()
{
  /*
  queue queue1 {1, 2, 3, 4};
  std::cout<<queue1<<std::endl;

  queue queue2;
  queue2.push(5);
  queue2.push(6);
  queue2.push(7);

  int val = queue2.peek();
  std::cout<<"I saw "<<val<<" on queue 2"<<std::endl;

  queue queue3(queue2);
  queue2.pop();

  std::cout<<queue2<<std::endl;
  std::cout<<queue3<<std::endl;
  */
  queue queue1 {1, 2, 3, 4};
  queue1.push(5);
  queue1.push(600);
  queue1.push(745);
  queue1.push(127);
  std::cout<<queue1<<std::endl;

  return 0;
}
