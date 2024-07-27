#include <iostream>
#include "Node.h"
using namespace std;
Node::Node()
{
  cout << "--Constructing node with NULL value " << endl;
  previous = NULL;
  next = NULL;
}
Node::Node(int aValue)
{
	cout << "--Constructing node with one value " << aValue << endl;
	value = aValue;
	previous = NULL;
	next = NULL;
}
Node::Node(int aValue, Node *aNext)
{
  	cout << "--Constructing node with value "<<aValue<<" and setting next as node with value " << aNext->getValue() << endl;
	value = aValue;
	previous = NULL;
	next = aNext;
}
Node::Node(int aValue, Node *aNext, Node *aPrevious)
{
  	cout << "--Constructing node with value "<<aValue<<" and setting next as node with value " << aNext->getValue();
	cout <<" and setting previous as node with value "<<aPrevious->getValue()<<endl;
	value = aValue;
	previous = aPrevious;
	next = aNext;
}
Node::~Node()
{
	cout << "--Destructing node with value " << value << endl;
}
int Node::getValue()
{
	return value;
}
Node* Node::getNext()
{
	return next;
}
Node* Node::getPrevious()
{
	return previous;
}
void Node::setValue(int aValue)
{
	cout << "--Changing node value from " << value << " to " << aValue << endl;
	value = aValue;
}
void Node::setNext(Node *aNext)
{
	cout << "--Node with value " << aNext->getValue() << " becoming next to ";
	if (aNext != NULL)
	{
		cout << "Node with value " << value << endl;
	}
	else
	{
		cout << "NULL" << endl;
	}
	if(getNext() != NULL)
	{
		Node *temp = this->getNext();
		temp->previous = NULL;
	}
	next = aNext;
	if(aNext!= NULL && next->getPrevious() != this) next->setPrevious(this);
}
void Node::setPrevious(Node *aPrevious)
{
	cout << "--Node with value " << aPrevious->getValue() << " becoming previous to ";
	if (aPrevious != NULL)
	{
		cout << "Node with value " << value<< endl;
	}
	else
	{
		cout << "NULL" << endl;
	}
	if(getPrevious() != NULL)
	{
		Node *temp = this->getPrevious();
		temp->next = NULL;
	}	
	previous = aPrevious;
	if(aPrevious!= NULL && previous->getNext() != this) previous->setNext(this);
}
void Node::printNode()
{
	Node *cursorPrevious = previous;
	
	while(cursorPrevious != NULL)
	{
		cout << cursorPrevious->getValue()<< " -> ";
		cursorPrevious = cursorPrevious->getPrevious();
	}
	
	cout << getValue()<< " -> ";	
	Node *cursorNext = next;
	while(cursorNext != NULL)
	{
		cout << cursorNext->getValue()<< " -> ";
		cursorNext = cursorNext->getNext();
	}
	cout << "NULL" << endl;
}
