#include <stdexcept>
#include <ostream>
#include "stack.h"

stack::stack():stack_size(0)
{

}

stack::stack(const stack& stk):stack_size(stk.stack_size)
{
  for(size_t i = 0; i < stk.stack_size; ++i)
  {
    values[i] = stk.values[i];
  }
}

stack::stack(std::initializer_list<int> ilist):stack_size(ilist.size())
{
  size_t i = 0;
  for(int val:ilist)
  {
    values[i] = val;
    ++i;
  }
}

stack& stack::operator=(const stack& stk)
{
  stack_size = stk.stack_size;
  for(size_t i = 0; i < stk.stack_size; ++i)
  {
    values[i] = stk.values[i];
  }
  return *this;
}

void stack::push(int val)
{
  values[stack_size] = val;  
  ++stack_size;
}

int stack::peek() const
{
  return values[stack_size - 1];
}

void stack::pop()
{
  stack_size--;
}

void stack::clear()
{
  stack_size = 0;
}

void stack::print(std::ostream& out) const
{
  out << "[";
  for(size_t i = 0; i < stack_size; ++i)
  {
    if(i > 0)
    {
      out<<", ";
    }
    out<<values[i];
  }
  out<<"]";
}

stack::~stack()
{

}
