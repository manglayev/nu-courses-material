#include <ostream>

class queue {

	// Private type for internal queue use only
	struct node {
		int value;
		node* next;
		// node constructor
		node(int x): value(x), next(nullptr) { }
	};

	// Fields of the queue object

	size_t queue_size;

	node* front;
	node* back;

public:

	// Creates an empty queue
	queue():
     queue_size(0),
		 front(nullptr),
		 back(nullptr)
	{ }

	// Copy constructor
	queue(const queue& q);

	// Initializer list constructor
	queue(std::initializer_list<int> ilist);

	// Copy assignment
	queue& operator=(const queue& q);

	// Insert an item at the back of the queue
	void push(int val);

	// Returns the value of the front-most item of the queue;
	// throws an exception if the queue is empty
	int peek() const;

	// Remove the front-most item from the queue
	// throws an exception if the queue is empty
	void pop();

	// Remove everything from the queue
	void clear();

	// Returns the number of items on the queue
	size_t size() const;

	// Returns whether or not the queue is currently empty
	bool empty() const;

	// Print out the contents of the queue
	void print(std::ostream& out) const {

		node* curr = front;

		out << "[";
		for (size_t i = 0; i < queue_size; ++i) {
			if (i > 0) {
				out << ", ";
			}
			out << curr->value;
			curr = curr->next;
		}
		out << "]";
	}

	// Destructor
	~queue();
};

inline std::ostream& operator<<(std::ostream& out, const queue& q) {
	q.print(out);
	return out;
}
