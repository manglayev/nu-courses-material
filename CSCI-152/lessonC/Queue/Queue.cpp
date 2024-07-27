#include <iostream>
#include "Queue.h"

// Initializer list constructor
queue::queue (std::initializer_list<int> ilist) : queue_size (0), front (nullptr), back (nullptr) {
	for (int x : ilist) {
		push (x);
	}
}

// Copy constructor
queue::queue(const queue& q) : queue_size (0), front (nullptr), back (nullptr) {
	node* cur = q.front;
	while (cur) {
		push (cur->value);
		cur = cur->next;
	}
}


// Copy assignment
queue& queue::operator=(const queue& q) {
	if (this != &q) {
		clear ();
		node* cur = q.front;
		while (cur) {
			push (cur->value);
			cur = cur->next;
		}
	}
	return *this;
}

// Insert an item at the back of the queue
void queue::push (int val) {
	node* new_back = new node (val);
	if (back) {
		back->next = new_back;
	} else {
		front = new_back;
	}
	++queue_size;
	back = new_back;
}

// Returns the value of the front-most item of the queue;
// throws an exception if the queue is empty
int queue::peek () const {
	if (!front)
		throw std::runtime_error ("queue is empty!");
	return front->value;
}

// Remove the front-most item from the queue
// throws an exception if the queue is empty
void queue::pop () {
	if (!front)
		throw std::runtime_error ("queue is empty!");
	node* old_front = front;
	front           = front->next;
	delete old_front;
	if (!front)
		back = nullptr;
	--queue_size;
}

// Remove everything from the queue
void queue::clear () {
	node* cur = front;
	while (cur != nullptr) {
		node* next = cur->next;
		delete cur;
		cur        = next;
	}
	queue_size = 0;
	front      = nullptr;
	back       = nullptr;
}

// Returns the number of items on the queue
size_t queue::size () const {
	return queue_size;
}

// Returns whether or not the queue is currently empty
bool queue::empty () const {
	return front == nullptr;
}

// Destructor
queue::~queue () {
	clear ();
}
