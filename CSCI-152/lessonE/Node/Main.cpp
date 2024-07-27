#include <iostream>
#include "Node.h"
using namespace std;

int main()
{
  Node node2(2);
  Node node3(3);
  Node *node1 = new Node(1, &node2, &node3);
  //node1->printNodeTree();
  //cout<<node2.getParentNode()->getData()<<"\t"<<node3.getParentNode()->getData()<<endl;
  Node node4(4);
  Node node5(5);
  node2.setLeftChildNode(&node4);
  node2.setRightChildNode(&node5);
  //cout<<node4.getParentNode()->getData()<<"\t"<<node5.getParentNode()->getData()<<endl;  
  //node1->printNodeTree();
  Node *node6 = new Node(6);
  Node *node7 = new Node(7);
  node3.setLeftChildNode(node6);
  node3.setRightChildNode(node7);
  //cout<<node6->getParentNode()->getData()<<"\t"<<node7->getParentNode()->getData()<<endl;
  node1->printNodeTree();
  Node node8(8);
  Node node9(9);
  node3.setLeftChildNode(&node8);
  node3.setRightChildNode(&node9);
  //if(node6->getParentNode() || node7->getParentNode())
  //  cout<<node6->getParentNode()->getData()<<"\t"<<node7->getParentNode()->getData()<<endl;
  node1->printNodeTree();
  delete node1;
  delete node6;
  delete node7;
  return 0;
}