#include <iostream>
#include "Deque.h"

int main()
{
  Deque deque1;
  deque1.pushToFront(5);
  deque1.pushToFront(6);
  deque1.pushToFront(7);
  deque1.outputValues();
  int val = deque1.peekAtFront();
  std::cout<<"Deque Front "<<val<<" on deque 1"<<std::endl;
  val = deque1.peekAtBack();
  std::cout<<"Deque Back "<<val<<" on deque 1"<<std::endl;
  deque1.pushToBack(1);
  deque1.pushToBack(2);
  deque1.pushToBack(3);
  deque1.outputValues();
  val = deque1.popFromBack();
  std::cout<<"Deque "<<val<<" popped from back of deque 1"<<std::endl;
  deque1.outputValues();
  val = deque1.popFromFront();
  std::cout<<"Deque "<<val<<" popped from front of deque 1"<<std::endl;
  deque1.outputValues();
  return 0;
}
