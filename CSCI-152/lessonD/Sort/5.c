#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
  const int arraySize = 10;
  int data[arraySize];
  int insert;

  cout<<"неотсортированный массив:"<<endl;
  srand((unsigned) time(NULL));

  for(int i=0; i<arraySize; ++i)
  {
	  data[i] = 1+rand()%10;
	  cout<<data[i]<<" ";
  }

  for(int next = 1; next<arraySize; ++next)
  {
	  insert = data[next];
	  int moveItem = next;

	  while((moveItem>0) && (data[moveItem-1]>insert))
	  {
		  data[moveItem] = data[moveItem-1];
		  moveItem--;
	  }
	  data[moveItem] = insert;
  }
  cout<<endl<<"Отсортированный массив: "<<endl;
	for(int i = 0; i<arraySize; i++)
	{
		cout<<data[i]<<" ";
	}

  return 0;
}
