#include <iostream>
#include "CircularLinkedList.h"
using namespace std;

CircularLinkedList::CircularLinkedList()
{
  cursor = NULL;
  sllSize = 0;
}

int CircularLinkedList::front()
{
  return cursor->getValue();
}

int CircularLinkedList::back()
{
  return cursor->getLink()->getValue();
}

void CircularLinkedList::advance()
{
  cout<<"advancing the cursor"<<endl;
  cursor = cursor->getLink();
}

void CircularLinkedList::add(int aValue)
{
  Node *newNode = new Node(aValue, cursor);
  if(cursor == NULL) newNode->setLink(newNode);
  else
  {
    Node *temp = cursor;
    while(temp->getLink() != cursor)
    {
      temp = temp->getLink();
    }
    temp->setLink(newNode);
    /*
      newNode->setLink(cursor->getLink());
      cursor->setLink(newNode);
    */
  }
  cursor = newNode;
  sllSize++;
}

void CircularLinkedList::remove()
{
  cout<<"removing the element"<<endl;
  Node *oldNode = cursor->getLink();
  if(oldNode == cursor) cursor = NULL;
  else
  {
    cursor->setLink(oldNode->getLink());
  }
  delete oldNode;
  sllSize--;
}

bool CircularLinkedList::empty()
{
  return cursor == NULL;
}

int CircularLinkedList::getSize()
{
  return sllSize;
}

void CircularLinkedList::printAll()
{  
  Node *current = cursor;
  if(current == NULL)
  {
    cout<<"EMPTY LIST\n";
    return;
  }
  if(current->getLink() == NULL)
  {
    cout<<current->getValue();
    cout<<"-->NULL\n";
  }
  else
  {
    do
    {
      cout<<current->getValue()<<"-->";
      current = current->getLink();
    }
    while(current != cursor);
    cout<<"NULL";
  }  
  cout<<endl<<"There are "<<getSize()<<" nodes in the Circular Linked List"<<endl;  
}

CircularLinkedList::~CircularLinkedList()
{
  cout<<"Destructing the circular linked list\n";
  while(!empty()) { remove(); }
}
