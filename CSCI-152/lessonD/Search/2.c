#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

using namespace std;

int binarySearch(const int [], int, int);
void showArray(const int [], int);
void showSubArray(const int [], int, int);

int main()
{
  const int arraySize = 10;
  int data[arraySize];
  int insert;
  int searchInt;


  srand((unsigned) time(NULL));
  for(int i=0; i<arraySize; ++i)
  {
	  data[i] = 1+rand()%10;
  }
  cout<<"неотсортированный массив:"<<endl;
  showArray(data, arraySize);


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
  showArray(data, arraySize);

  cout<<endl<<"Поиск элемента в отсортированном массиве: "<<endl;

  cout<<endl<<"Введите цифру которую необходимо найти в массиве (-1 выход из программы):"<<endl;
  cin>>searchInt;
  cout<<endl;

  while(searchInt!=-1)
  {
    int position = binarySearch(data, searchInt, arraySize);
    if(position == -1)
      cout<<"Цифра "<<searchInt<<"  не найдена.\n";
    else
      cout<<"Номер цифры "<<searchInt<<" в массиве: "<<position<<".\n";
    cout<<"\n\n Введите цифру которую необходимо найти в массиве (-1 выход из программы): ";
    cin>>searchInt;
    cout<<endl;
  }


  return 0;
}

int binarySearch(const int data[], int searchElement, int arraySize)
{
  int low = 0;
  int high = arraySize - 1;
  int middle = (low+high+1)/2;
  int location = -1;

  do
  {
	showSubArray(data, low, high);
    for(int i = 0; i<middle; ++i)
    		cout<<"  ";
    		cout<<"*"<<endl;

    if(searchElement == data[middle])
      location = middle;
    else if(searchElement<data[middle])
      high = middle - 1;
    else
      low = middle+1;
    middle = (low+high+1)/2;
  }
  while( (low<=high) && (location == -1) );

  return location;
}

void showArray(const int data[], int arraySize)
{
	for(int i = 0; i<arraySize; i++)
		{
			cout<<data[i]<<" ";
		}
	cout<<endl;
}

void showSubArray(const int data[], int low, int high)
{
  for(int i = 0; i<low; ++i)
    cout<<"  ";
  for(int i = low; i<=high; ++i)
    cout<<data[i]<<" ";
  cout<<endl;
}
