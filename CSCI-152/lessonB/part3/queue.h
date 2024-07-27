#include <ostream>

class queue
{
  int *values;

  size_t queue_size;
  size_t front_position;
  size_t back_position;
  size_t array_capacity;

  public:
    //creates an empty queue
    queue();
    //copy constructor
    queue(const queue& q);
    //initializer list constructor
    queue(std::initializer_list<int> ilist);
    //copy assignment
    queue& operator=(const queue& q);
    //insert an item at the back of the queue
    void push(int val);
    //returns the value of the front-most item of the queue;
    //throws an exception if the queue is empty
    int peek() const;
    //remove the front-most item from the queue
    //throws an exception if the queue is empty
    void pop();
    //removing everything from the queue
    void clear();
    //returns the number of items in the queue
    size_t size() const;
    //returns whether or not the queue is currently empty
    bool empty() const;
    //print out the contents of the queue
    void print(std::ostream& out) const;
    //destructor
    ~queue();
};

inline std::ostream& operator<<(std::ostream& out, const queue& q)
{
  q.print(out);
  return out;
}
