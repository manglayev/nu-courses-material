#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

using namespace std;

void showArray(int [], int);
void selectionSearch(int [], int);

int main()
{
  int arraySize = 10;
  int data[arraySize];

  srand((unsigned) time(NULL));
  for(int i=0; i<arraySize; ++i)
  {
	  data[i] = 1+rand()%10;
  }
  cout<<"неотсортированный массив:"<<endl;
  showArray(data, arraySize);
  cout<<endl<<"Отсортированный массив: "<<endl;
  selectionSearch(data, arraySize);

  return 0;
}

void selectionSearch(int dataF[], int arraySizeF)
{
   for (int i = 0; i < arraySizeF; i++)
   {
	int min = i;
	for (int j = i+1; j<arraySizeF; j++)
	{
		if (dataF[j] < dataF[min])
			  min = j;
		if (dataF[min] != dataF[i])
		{
		   int t = dataF[i];
		   dataF[i] = dataF[min];
		   dataF[min] = t;
		}
	}
   }
   for(int i = 0; i<arraySizeF; i++)
   {
	   cout<<dataF[i]<<" ";
   }
}

void showArray(int data[], int arraySize)
{
	for(int i = 0; i<arraySize; i++)
		{
			cout<<data[i]<<" ";
		}
	cout<<endl;
}
