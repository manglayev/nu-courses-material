#include <stdexcept>
#include <ostream>
#include "queue.h"

queue::queue():values(new int[5]), queue_size(0), array_capacity(5)
{
  //values array statically allocated already
  front_position = 0;
  back_position = 0;
  queue_size = 0;
}

queue::queue(const queue& q):
  values(new int[q.array_capacity]),
  queue_size(q.queue_size),
  front_position(0),
  back_position(q.queue_size - 1),
  array_capacity(q.array_capacity)
{
  for(size_t i = 0, j = q.front_position; i < q.queue_size; ++i, j = (j+1) % q.array_capacity)
  {
    values[i] = q.values[j];
  }
}

queue::queue(std::initializer_list<int> ilist):
values(new int[2*ilist.size()]),
queue_size(ilist.size()),
array_capacity(2*ilist.size())
{
  size_t i = 0;
  for(int val:ilist)
  {
    values[i] = val;
    ++i;
  }
}

queue& queue::operator=(const queue& q)
{
  if(queue_size != q.queue_size)
  {
    delete[] values;
		values = new int[q.array_capacity];
		array_capacity = q.array_capacity;
		queue_size = q.queue_size;
  }

  for(size_t i = 0; i < q.queue_size; ++i)
  {
    values[i] = q.values[i];
  }
  return *this;
}

void queue::push(int val)
{
  if(queue_size == array_capacity)
  {
    int* new_values = new int[2 * array_capacity];
    for(size_t i = 0; i < queue_size; ++i)
    {
      new_values[i] = values[i];
    }
    delete[] values;
    values = new_values;
    array_capacity = 2 * array_capacity;
    back_position++;
    //printf("\nHERE 1\n");
  }
  //printf("\nHERE 2\n");
  ++back_position;
  values[queue_size] = val;
  ++queue_size;
}

int queue::peek() const
{
  if(queue_size == 0)
    throw std::invalid_argument("Cannot peek at the front of an empty queue");
  return values[front_position];
  //return values[queue_size - 1];
}

void queue::pop()
{
  if(queue_size == 0)
    throw std::invalid_argument("Cannot pop from an empty queue");
  front_position++;
  back_position = (back_position+1) % queue_size;
  queue_size--;
}

void queue::clear()
{
  front_position = 0;
  back_position = 0;
  queue_size = 0;
}

size_t queue::size() const
{
	return queue_size;
}

bool queue::empty() const
{
  return (queue_size == 0);
}

void queue::print(std::ostream& out) const
{
  out << "[";
  for(size_t i = 0; i < queue_size; ++i)
  {
    if(i > 0)
    {
      out<<", ";
    }
    out<<values[i];
  }
  out<<"]";
}

queue::~queue()
{
  delete[] values;
}
