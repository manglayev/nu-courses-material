#include <iostream>
using namespace std;

const int arraySizeG = 10;

void heapSort(int [], int);
void heapify(int [], int, int);
void showArray(int [], int);

int main()
{
    int data[arraySizeG];

    srand((unsigned) time(NULL));

    for(int i=0; i<arraySizeG; ++i)
    {
      data[i] = 1+rand()%10;
    }

    cout<<"HEAP"<<endl;
    cout<<"не сортированный массив:"<<endl;
    showArray(data, arraySizeG);
    heapSort(data, arraySizeG);
    cout<<"сортированный массив:"<<endl;
    showArray(data, arraySizeG);

    return 0;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
            heapify(arr, n, i);
        for(int q=0; q<arraySizeG; q++)
        {
            cout<<arr[q]<<" ";
        }
        cout<<"+++"<<endl;
    }
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
        for(int q=0; q<arraySizeG; q++)
                {
                    cout<<arr[q]<<" ";
                }
        cout<<"---"<<endl;
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
