#include <iostream>
#include "DoublyLinkedList.h"

int main()
{
  DoublyLinkedList doublyLinkedList1;

  doublyLinkedList1.insertAfter(1);
  doublyLinkedList1.insertAfter(2);
  
  doublyLinkedList1.insertAfter(3);
  doublyLinkedList1.insertAfter(4);

  doublyLinkedList1.insertBefore(0);
  doublyLinkedList1.printAll();

  doublyLinkedList1.removeAfter();
  doublyLinkedList1.printAll();

  doublyLinkedList1.removeBefore();
  doublyLinkedList1.printAll();

  doublyLinkedList1.insertAt(0, 0);
  doublyLinkedList1.printAll();

  doublyLinkedList1.insertAt(4, 5);
  doublyLinkedList1.printAll();

  doublyLinkedList1.removeAt(0);
  doublyLinkedList1.printAll();


  std::cout<<"value of the node at index 2 equals = "<<doublyLinkedList1.getNode(2)->getValue()<<std::endl;
  std::cout<<"index of the node with value 3 equals = "<<doublyLinkedList1.getIndex(3)<<std::endl;

  doublyLinkedList1.empty();
  doublyLinkedList1.printAll();

  return 0;
}
