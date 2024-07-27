#include <stdexcept>
#include <ostream>
#include "stack.h"


stack::stack():values(new int[5]), stack_size(0), array_capacity(5)
{
  //values array statically allocated already
}

stack::stack(const stack& stk):
  values(new int[stk.array_capacity]),
  stack_size(stk.stack_size),
  array_capacity(stk.array_capacity)
{
  for(size_t i = 0; i < stk.stack_size; ++i)
  {
    values[i] = stk.values[i];
  }
}

stack::stack(std::initializer_list<int> ilist):
values(new int[2*ilist.size()]),
stack_size(ilist.size()),
array_capacity(2*ilist.size())
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
  if(stack_size != stk.stack_size)
  {
    delete[] values;
		values = new int[stk.array_capacity];
		array_capacity = stk.array_capacity;
		stack_size = stk.stack_size;
  }

  for(size_t i = 0; i < stk.stack_size; ++i)
  {
    values[i] = stk.values[i];
  }
  return *this;
}

void stack::push(int val)
{
  if(stack_size == array_capacity)
  {
    int* new_values = new int[2 * array_capacity];
    for(size_t i = 0; i < stack_size; ++i)
    {
      new_values[i] = values[i];
    }
    delete[] values;
    values = new_values;
    array_capacity = 2 * array_capacity;
  }
  values[stack_size] = val;
  ++stack_size;
}

int stack::peek() const
{
  if(stack_size == 0)
    throw std::invalid_argument("Cannot peek at the top of an empty stack");
  return values[stack_size - 1];
}

void stack::pop()
{
  if(stack_size == 0)
    throw std::invalid_argument("Cannot pop from an empty stack");
  stack_size--;
}

void stack::clear()
{
  stack_size = 0;
}

size_t stack::size() const
{
	return stack_size;
}

bool stack::empty() const
{
  return (stack_size == 0);
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
  delete[] values;
}
