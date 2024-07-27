#include <stdexcept>
#include <iostream>
#include "safe_int_array.h"

safe_int_array::safe_int_array(): size(0), values(new int[0])
{
  std::cout<<"in default constructor"<<std::endl;
}

safe_int_array::safe_int_array(size_t sz): size(sz), values(new int[sz])
{
  std::cout<<"in argument constructor"<<std::endl;
}

safe_int_array::safe_int_array(const safe_int_array& other):
  size(other.size), values(new int[other.size])
{
  std::cout<<"in copy constructor"<<std::endl;
  for(size_t i = 0; i < other.size; ++i)
  {
    values[i] = other.values[i];
  }
}

safe_int_array& safe_int_array::operator=(const safe_int_array& other)
{
  std::cout<<"in assignment"<<std::endl;
  if(size != other.size)
  {
    size = other.size;
    delete[] values;
    values = new int[size];
  }

  for(size_t i = 0; i < other.size; ++i)
  {
    values[i] = other.values[i];
  }

  return *this;
}

int safe_int_array::get_value(size_t index) const
{
  if(index >= size)
  {
    throw std::out_of_range("Bad index");
  }
  return values[index];
}

void safe_int_array::set_value(size_t index, int value)
{
  if(index >= size)
  {
    throw std::out_of_range("Bad index");
  }
  values[index] = value;
}

int safe_int_array::get_size() const
{
  return size;
}

void safe_int_array::print(std::ostream& out) const
{
  out << "{";
  for(size_t i = 0; i < size; ++i)
  {
    if(i > 0)
    {
      out << ", ";
    }
    out << values[i];
  }
  out << "}" << std:: endl;
}

safe_int_array::~safe_int_array()
{
  std::cout<<"in destructor"<<std::endl;
  //may comment out
  delete[] values;
}
