#include <iostream>
#include "Node.h"
using namespace std;

int main()
{
  //example with stack memory
  //automatically calls the destructor
  Node node1(1);
  Node node2(2);
  Node node3(3);

  node1.setLink(&node2);
  node2.setLink(&node3);
  node1.printNode();

  Node node4(4, &node1);
  node1.printNode();
  node4.printNode();

  node4.setValue(0);
  node4.printNode();

  Node node5;
  node5.setValue(4);
  node5.printNode();

  //example with heap memory
  //manually calls the destructor
  Node *n1 = new Node(10);
  Node *n2 = new Node(20);
  Node *n3 = new Node(30);

  n1->setLink(n2);
  n2->setLink(n3);
  n1->printNode();

  Node *n4 = new Node(40, n1);
  n1->printNode();
  n4->printNode();

  n4->setValue(0);
  n4->printNode();

  Node *n5 = new Node;
  n5->setValue(40);
  n5->printNode();

  delete n1;
  delete n2;
  delete n3;
  delete n4;
  delete n5;

  return 0;
}
