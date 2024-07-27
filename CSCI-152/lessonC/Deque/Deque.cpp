#include <stdexcept>
#include <iostream>
#include "Deque.h"

Deque::Deque()
{
	//front = NULL;
	//back = NULL;
	dSize = 0;
	front = new Node();
  	back = new Node();
  	front -> setNext(back);
}

void Deque::pushToFront(int i)
{
	//Node* node = new Node(i);
	if (dSize == 0)
	{
		Node* node = new Node(i, back, front);
		//front = back = node;
	}
	else
	{
		Node* node = new Node(i, front->getNext(), front);
		//node->setNext(front);
		//front->setPrevious(node);
		//front = node;
	}
	dSize++;
}


void Deque::pushToBack(int i)
{
	//Node* node = new Node(i);
	if (dSize == 0)
  	{
		Node* node = new Node(i, back, front);
		//front = back = node;
	}
  	else
  	{
		Node* node = new Node(i, back, back->getPrevious());
		//node->setPrevious(back);
		//back->setNext(node);
		//back = node;
	}
	dSize++;
}


int Deque::popFromFront()
{
	if(dSize == 0) throw std::invalid_argument("Cannot pop from the front of an empty deque");
	int x = front->getNext()->getValue();
	Node* node = front->getNext();
	front->setNext(front->getNext()->getNext());
	delete node;
	/*	
	Node* node = front;
	if (dSize == 1)
	{
		front = back = NULL;
	}
	else
	{
		front = front->getNext();
		front->setPrevious(NULL);
	}
	delete node;
	*/
	dSize--;
	return x;
}


int Deque::popFromBack()
{	
	if(dSize == 0) throw std::invalid_argument("Cannot pop from the front of an empty deque");
	int x = back->getPrevious()->getValue();
	Node* node = back->getPrevious();
	back->setPrevious(back->getPrevious()->getPrevious());
	delete node;
	/*
	int x = back->getValue();
	//Node* node = back;
	if (dSize == 1)
  	{
		front = back = NULL;
	}
  	else
  	{
		back = back->getPrevious();
		back->setNext(NULL);
	}
	//delete node;
	*/
	dSize--;
	return x;
}


int Deque::peekAtFront()
{
	try
	{
		if(dSize > 0)
		{
			return front->getNext()->getValue();
		}
		else
		{
			throw std::invalid_argument("Cannot peek at front of an empty deque");
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() <<std::endl;
		return -1;
	}
}


int Deque::peekAtBack()
{
	try
	{
		if(dSize > 0)
		{
			return back->getPrevious()->getValue();
		}
		else
		{
			throw std::invalid_argument("Cannot peek at back of an empty deque");
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() <<std::endl;
		return -1;
	}
}

int Deque::size()
{
	return dSize;
}

void Deque::outputValues()
{
	std::cout << "f[";
	Node* cursor = front->getNext();
	while (cursor != NULL)
  	{
		if(cursor != back)
		{
			if(cursor->getNext() == back)
				std::cout << cursor->getValue();
			else
				std::cout << cursor->getValue() << " ";
		}
		cursor = cursor->getNext();
	}
	std::cout << "]b" << std::endl;
}

Deque::~Deque()
{
	Node* cursor = front;
	while (cursor != NULL)
  	{
		Node* next = cursor->getNext();
		delete cursor;
		cursor = next;
	}
}
