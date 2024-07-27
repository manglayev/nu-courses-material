#include <iostream>
#include <array>
using namespace std;
class Sort
{
    public:
        bool ascending = true;
        const static size_t  arraySize{15};
        array<int, arraySize> inputArray;

    public:
        Sort();
        ~Sort();
        void printArray();
        
        void insertionSort();

        void selectionSort();

        void mergeSort(int l, int r);
        void merge(int l, int m, int r);
        
        void quickSort(int low, int high);
        int partition (int low, int high);
        void swap(int* a, int* b);

        void heapSort(int n);
        void heapify(int n, int i);
};