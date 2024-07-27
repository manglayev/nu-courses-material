#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
	top = NULL;
	sSize = 0;
}

void Stack::push(int i) {

	Node* node = new Node(i);
	node->setLink(top);
	top = node;

	sSize++;
}

int Stack::pop() {

	int val = top->getValue();

	Node* toRemove = top;
	top = top->getLink();
	delete toRemove;

	sSize--;

	return val;
}

int Stack::peek() {

	return top->getValue();
}

int Stack::size()
{
	return sSize;
}

void Stack::outputValues() {
	cout << "t[";

	Node* cursor = top;
	while (cursor != NULL) {
		cout << cursor->getValue() << " ";
		cursor = cursor->getLink();
	}

	cout << "]b" << endl;
}

Stack::~Stack() {

	Node* cursor = top;
	while (cursor != NULL) {
		Node* next = cursor->getLink();
		delete cursor;
		cursor = next;
	}
}
