#include <iostream>
#include "SinglyLinkedList.h"

int main()
{
  SinglyLinkedList singlyLinkedList1;

  singlyLinkedList1.insertAfter(1);
  singlyLinkedList1.insertAfter(2);
  singlyLinkedList1.insertAfter(3);
  singlyLinkedList1.insertAfter(4);

  singlyLinkedList1.insertBefore(0);
  singlyLinkedList1.printAll();

  singlyLinkedList1.removeAfter();
  singlyLinkedList1.printAll();

  singlyLinkedList1.removeBefore();
  singlyLinkedList1.printAll();

  singlyLinkedList1.insertAt(0, 0);
  singlyLinkedList1.printAll();

  singlyLinkedList1.insertAt(4, 5);
  singlyLinkedList1.printAll();

  singlyLinkedList1.removeAt(0);
  singlyLinkedList1.printAll();

  std::cout<<"value of the node at index 2 equals = "<<singlyLinkedList1.getNode(2)->getValue()<<std::endl;
  std::cout<<"index of the node with value 3 equals = "<<singlyLinkedList1.getIndex(3)<<std::endl;

  singlyLinkedList1.empty();
  singlyLinkedList1.printAll();
  return 0;
}
