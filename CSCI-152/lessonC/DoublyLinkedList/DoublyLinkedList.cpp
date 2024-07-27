#include <iostream>
#include "DoublyLinkedList.h"
using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
  dllSize = 0;
  head = new Node();
  tail = new Node();
  head -> setNext(tail);
}

void DoublyLinkedList::insertBefore(int data)
{
  if(dllSize == 0)
  {
    //cout<<"insertBefore 1"<<endl;
    Node *node = new Node(data, tail, head);
  }
  else
  {
    //cout<<"insertBefore 2"<<endl;
    Node *node = new Node(data, head->getNext(), head);
  }
  dllSize++;
}

void DoublyLinkedList::insertAfter(int data)
{
  if(dllSize == 0)
  {
    //cout<<"insertAfter 1"<<endl;
    insertBefore(data);
    return;
  }
  //cout<<"insertAfter 2"<<endl;
  Node *newNode = new Node(data, tail, tail->getPrevious());
  dllSize++;
}

void DoublyLinkedList::insertAt(int index, int data)
{
  if(index < 0 || index > dllSize) 
  {
    cout<<"index is out of bounds"<<endl;
    return;
  }
  else if(index == 0)
  {
    //cout<<"insertAt 1"<<endl;
    insertBefore(data);
    return;
  }
  else if(index == dllSize)
  {
    //cout<<"insertAt 2"<<endl;
    insertAfter(data);
    return;
  }
  else
  {
    //cout<<"insertAt 3"<<endl;
    Node *previousNode = head;
    for(int i = 0; i < index; ++i)
    {
      previousNode = previousNode->getNext();
    }
    Node *newNode = new Node(data, previousNode->getNext(), previousNode);
  }
  dllSize++;
}

void DoublyLinkedList::removeBefore()
{
  if(dllSize == 0)
  {
    cout<<"the doubly linked list is already empty"<<endl;
    return;
  }
  else if(dllSize == 1)
  {
    //cout<<"removeBefore 1"<<endl;
    Node *node = head->getNext();
    head->setNext(tail);
    delete node;
  }
  else
  {
    //cout<<"removeBefore 2"<<endl;
    Node *n1 = head->getNext();
    Node *n2 = head->getNext()->getNext();
    head->setNext(n2);
    delete n1;
  }
  dllSize--;
}

void DoublyLinkedList::removeAfter()
{
  if(dllSize < 2)
  {
    //cout<<"removeAfter 1"<<endl;
    removeBefore();
    return;
  }
  else
  {
    Node *n1 = tail->getPrevious();
    Node *n2 = tail->getPrevious()->getPrevious();
    tail->setPrevious(n2);
    delete n1;    
  }
  dllSize--;
}

void DoublyLinkedList::removeAt(int index)
{
  if(index < 0 || index >= dllSize)
  {
    cout<<"index is out of bounds"<<endl;
    return;
  }
  if(index == 0)
  {
    //cout<<"removeAt 1"<<endl;
    removeBefore();
    return;
  }
  else if(index == dllSize - 1)
  {
    //cout<<"removeAt 2"<<endl;
    removeAfter();
    return;
  }
  else
  {
    //cout<<"removeAt 3"<<endl;
    Node *node = head->getNext();
    for(int i = 0; i < index; ++i)
    {
      node = node->getNext();
    }
    node->getPrevious()->setNext(node->getNext());
    delete node;
  }
  dllSize--;
}

bool DoublyLinkedList::empty() const
{
  cout<<"is the doubly linked list is empty? ";
  return head -> getNext() == tail;
}

Node *DoublyLinkedList::getNode(int index)
{
  if (index < 0 || index >= dllSize) 
  {
    cout<<"index is out of bounds"<<endl;
    return head;
  }
  else
  {
    Node *node = head;
    for(int i = 0; i < index; ++i)
    {
      node = node->getNext();
    }
    return node->getNext();
  }
}

int DoublyLinkedList::getIndex(int data)
{
  if(dllSize == 0)
  {
    cout<<"the doubly linked list is empty"<<endl;
    return -1;
  }
  int index = -1;
  Node *node = head;
  while(node->getValue() != data)
  {
    index++;
    node = node->getNext();
    if(node == NULL) return -1;
  }
  return index;
}

void DoublyLinkedList::printAll()
{
  if(head->getNext() == tail)
  {
    cout<<"THE DOUBLY LINKED LIST IS EMPTY\n";
    return;
  }
  else
  {
    cout<<"HEAD -> ";
    Node *current = head->getNext();
    while(current != NULL)
    {
      if(current != tail)
        cout<<current->getValue()<<" -> ";
      current = current->getNext();
    }
    cout<<"TAIL";
  }
  cout<<"\n";
}

DoublyLinkedList::~DoublyLinkedList()
{
  cout<<"Destructing the doubly linked list"<<endl;
  while(!empty())
  {
    removeBefore();
  }
  cout<<endl;
  delete head;
  delete tail;
}