#include <ostream>

class stack
{
  //deliberately set to 5 to show that it can't be const
  int values[5];
  size_t stack_size;

  public:
    //empty constructor
    stack();
    //copy constructor
    stack(const stack& stk);
    //initializer list constructor
    stack(std::initializer_list<int> ilist);
    //copy assignment
    stack& operator=(const stack& stk);
    //insert an item at the top of the stack
    void push (int val);
    //returns the value of the topmost item of the stack;
    //throws an exception if the stack is empty
    int peek() const;
    //remove the topmost item from the stack;
    //throws an exception if the stack is empty
    void pop();
    //remove everything from the stack
    void clear();
    //returns the number of items on the stack
    size_t size() const;
    //returns whether or not the stack is currently empty
    bool empty() const;
    //print out the contents of the stack
    void print(std::ostream& out) const;
    //destructor
    ~stack();
};

inline std::ostream& operator<<(std::ostream& out, const stack& stk)
{
  stk.print(out);
  return out;
}
