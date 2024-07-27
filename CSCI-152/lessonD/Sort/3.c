#include <iostream>
#include <cstdlib>
#include <cstddef>

using namespace std;

typedef int* IntArrayPtr;
void fill_array(int a[], int size);
void sort(int a[], int size);

int main()
{
	cout<<"This program sorts numbers from lowest to highest. \n";

	int array_size;
	cout<<"How many numbers will be sorted?"<<endl;
	cin>>array_size;

	IntArrayPtr a;
	a = new int[array_size];

	fill_array(a, array_size);
	sort(a, array_size);

	cout<<"In sorted order the numbers are: "<<endl;
	for(int index = 0; index<array_size; index++)
		cout<<a[index]<<" ";
	cout<<endl;

	delete [] a;
	return 0;
}

void fill_array(int a[], int size)
{
	srand((unsigned) time(NULL));
	for(int i=0; i<size; ++i)
	{
		a[i] = 1+rand()%10;
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sort(int data[], int arraySize)
{
	int insert;
	for (int next = 1; next<arraySize; ++next)
	{
		insert = data[next];
		int moveItem = next;

		while ((moveItem>0) && (data[moveItem - 1]>insert))
		{
			data[moveItem] = data[moveItem - 1];
			moveItem--;
		}

		data[moveItem] = insert;
	}
}