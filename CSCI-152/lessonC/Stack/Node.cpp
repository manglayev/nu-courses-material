#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(int val)
{
	cout << "--Constructing node with value " << val << endl;
	value = val;
	link = NULL;
}

int Node::getValue()
{
	return value;
}

void Node::setValue(int val)
{
	cout << "--Changing node value from " << value << " to " << val << endl;
	value = val;
}

Node* Node::getLink()
{
	return link;
}

void Node::setLink(Node* lnk)
{
	cout << "--Node with value " << value << " linking to ";
	if (lnk != NULL) {
		cout << "node with value " << lnk->getValue() << endl;
	} else {
		cout << "NULL" << endl;
	}
	link = lnk;
}

Node::~Node()
{
	cout << "--Destructing node with value " << value << endl;
}
