#include "Node.h"

class Deque
{

private:
	Node* front;
	Node* back;
	int dSize;

public:
	// Pre:  true
	// Post: deque is empty
	Deque();

	// Pre:  true
	// Post: the value i is added to the front of the deque
	void pushToFront(int i);
	// Pre:  true
	// Post: the value i is added to the back of the deque
	void pushToBack(int i);

	// Pre:  deque is not empty
	// Post: a value x is removed from the front of the deque
	//   AND the value x is returned
	int popFromFront();

	// Pre:  deque is not empty
	// Post: a value x is removed from the back of the deque
	//   AND the value x is returned
	int popFromBack();

	// Pre:  deque is not empty
	// Post: deque is unchanged
	//   AND the value at the front of the deque is returned
	int peekAtFront();

	// Pre:  deque is not empty
	// Post: deque is unchanged
	//   AND the value at the back of the deque is returned
	int peekAtBack();

	// Pre:  true
	// Post: size of deque is returned
	int size();

	// Pre:  true
	// Post: outputs the contents of the deque
	void outputValues();

	// Pre:  true
	// Post: true
	~Deque();
};
