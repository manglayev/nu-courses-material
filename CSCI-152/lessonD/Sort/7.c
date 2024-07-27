#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

const int arraySizeG = 10;
void mergeSort(int [], int, int);
void merge(int [], int, int, int);
void showArray(int [], int);

int main()
{

  int data[arraySizeG];

  srand((unsigned) time(NULL));
  for(int i=0; i<arraySizeG; ++i)
  {
	  data[i] = 1+rand()%10;
  }
  cout<<"не сортированный массив:"<<endl;
  showArray(data, arraySizeG);
  mergeSort(data, 0, arraySizeG-1);
  cout<<"сортированный массив: "<<endl;
  showArray(data, arraySizeG);
  return 0;
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
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
