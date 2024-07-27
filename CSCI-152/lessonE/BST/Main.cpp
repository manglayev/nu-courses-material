#include <iostream>
#include "BST.h"
using namespace std;
int main()
{
  BinarySearchTree *bst1 = new BinarySearchTree();
  bst1->insert(23);
  bst1->insert(12);
  bst1->insert(3);
  bst1->insert(15);
  bst1->insert(7);
  bst1->insert(31);
  bst1->insert(29);
  bst1->insert(88);
  bst1->insert(53);
  bst1->printTreeNode();
  Node *n1 = bst1->search(bst1->root, 31);
  Node *n2 = bst1->search(bst1->root, 15);
  Node *n3 = bst1->search(bst1->root, 88);
  cout<<bst1->successor(n1)->getData()<<endl;
  cout<<bst1->successor(n2)->getData()<<endl;
  if(bst1->successor(n3) != NULL)
    cout<<bst1->successor(n3)->getData()<<endl;
  Node *n4 = bst1->search(bst1->root, 12);
  Node *n5 = bst1->search(bst1->root, 29);
  Node *n6 = bst1->search(bst1->root, 3);
  cout<<bst1->predecessor(n4)->getData()<<endl;
  cout<<bst1->predecessor(n5)->getData()<<endl;
  if(bst1->predecessor(n6) != NULL)
    cout<<bst1->predecessor(n3)->getData()<<endl;
  /*
  bst1->insert(2);
  //bst1->printTreeNode();
  bst1->insert(1);
  bst1->insert(6);
  //bst1->printTreeNode();
  bst1->insert(3);
  bst1->insert(7);
  bst1->remove(3);
  bst1->preOrder(bst1->root);cout<<endl;
  //cout<<bst1->root->getData();
  bst1->printTreeNode();
  bst1->insert(0);
  bst1->printTreeNode();
  //bst1->preOrder(bst1->root);
  //cout<<endl;
  */
  /*
  bst1->inOrder(bst1->root);
  cout<<endl;
  bst1->postOrder(bst1->root);
  cout<<endl;
  */
  delete bst1;
  return 0;
}