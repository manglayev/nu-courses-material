#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;

SinglyLinkedList::SinglyLinkedList()
{
  head = NULL;
}

void SinglyLinkedList::insertBefore(int data)
{
  Node *newNode = new Node(data);
  newNode->setLink(head);
  head = newNode;
  if(sllSize == 0) tail = head;
  sllSize++;
}

void SinglyLinkedList::insertAfter(int data)
{
  if(sllSize == 0)
  {
    insertBefore(data);
    return;
  }
  Node *newNode = new Node(data, NULL);
  tail->setLink(newNode);
  tail = newNode;
  sllSize++;
}

void SinglyLinkedList::insertAt(int index, int data)
{
  if(index < 0 || index > sllSize) return;
  if(index == 0)
  {
    insertBefore(data);
    return;
  }
  else if(index == sllSize)
  {
    insertAfter(data);
    return;
  }
  Node *previousNode = head;
  for(int i = 0; i < index - 1; ++i)
  {
    previousNode = previousNode->getLink();
  }
  Node *nextNode = previousNode->getLink();
  Node *newNode = new Node(data);
  newNode->setLink(nextNode);
  previousNode->setLink(newNode);
  sllSize++;
}

void SinglyLinkedList::removeBefore()
{
  if(sllSize == 0) return;
  Node *node = head;
  head = head->getLink();
  delete node;
  sllSize--;
}

void SinglyLinkedList::removeAfter()
{
  if(sllSize == 0) return;
  if(sllSize == 1) { removeBefore(); return; }
  Node *previousNode = head;
  Node *newNode = head->getLink();

  while(newNode->getLink() != NULL)
  {
    previousNode = previousNode->getLink();
    newNode = newNode->getLink();
  }

  previousNode->setLink(NULL);
  tail = previousNode;
  delete newNode;
  sllSize--;
}

void SinglyLinkedList::removeAt(int index)
{
  if(sllSize == 0) return;
  if(index < 0 || index >= sllSize) return;
  if(index == 0) { removeBefore(); return; }
  else if(index == sllSize - 1){ removeAfter(); return; }

  Node *previousNode = head;
  for(int i = 0; i < index - 1; ++i)
  {
    previousNode = previousNode->getLink();
  }
  Node *newNode = previousNode->getLink();
  Node *nextNode = newNode->getLink();
  previousNode->setLink(newNode);
  delete newNode;
  sllSize--;
}

bool SinglyLinkedList::empty() const
{
  //cout<<"check if the singly linked list is empty"<<endl;
  return head == NULL;
}

Node *SinglyLinkedList::getNode(int index)
{
  if (index < 0 || index > sllSize) return NULL;
  Node *node = head;
  for(int i = 0; i < index; ++i)
  {
    node = node->getLink();
  }
  return node;
}

int SinglyLinkedList::getIndex(int data)
{
  if(sllSize == 0) return -1;
  int index = 0;
  Node *node = head;
  while(node->getValue() != data)
  {
    index++;
    node = node->getLink();
    if(node == NULL) return -1;
  }
  return index;
}

int SinglyLinkedList::getSize()
{
  return sllSize;
}

void SinglyLinkedList::printAll()
{
  Node *current = head;
  if(current == NULL)
  {
    cout<<"EMPTY LIST\n";
    return;
  }
  if(current->getLink() == NULL)
  {
    cout<<current->getValue();
    cout<<"-->";
    cout<<"NULL\n";
  }
  else
  {
    while(current)
    {
      cout<<current->getValue()<<"-->";
      current = current->getLink();
    }
  }
  cout<<endl<<"There are "<<getSize()<<" nodes in the Singly Linked List"<<endl;  
}

SinglyLinkedList::~SinglyLinkedList()
{
  //cout<<"Destructing the linked list\n";
  while(!empty()) { removeBefore(); }
}
