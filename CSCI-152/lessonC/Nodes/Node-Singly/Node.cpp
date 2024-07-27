#include <iostream>
#include "Node.h"
using namespace std;
Node::Node()
{
  cout << "--Constructing node with NULL value " << endl;
  link = NULL;
}
Node::Node(int aValue)
{
	cout << "--Constructing node with one value " << aValue << endl;
	value = aValue;
	link = NULL;
}
Node::Node(int aValue, Node *aLink)
{
  cout << "--Constructing node with value and link " << aValue << endl;
	value = aValue;
	link = aLink;
}
Node::~Node()
{
	cout << "--Destructing node with value " << value << endl;
}
int Node::getValue()
{
	return value;
}
Node* Node::getLink()
{
	return link;
}
void Node::setValue(int aValue)
{
	cout << "--Changing node value from " << value << " to " << aValue << endl;
	value = aValue;
}
void Node::setLink(Node *aLink)
{
	cout << "--Node with value " << value << " linking to ";
	if (aLink != NULL)
	{
		cout << "Node with value " << aLink->getValue() << endl;
	}
	else
	{
		cout << "NULL" << endl;
	}
	link = aLink;
}
void Node::printNode()
{
  Node* cursor = link;
  cout << getValue()<< " -> ";
  while(cursor != NULL)
  {
    cout << cursor->getValue()<< " -> ";
    cursor = cursor->getLink();
  }
  cout << "NULL" << endl;
}
