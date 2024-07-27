#include <iostream>
#include "Sort.h"

int main()
{
    Sort a;
    a.printArray();

    a.ascending = true;
    a.insertionSort();
    a.printArray();

    a.ascending = false;
    a.insertionSort();
    a.printArray();

    a.ascending = true;
    a.selectionSort();
    a.printArray();

    a.ascending = false;
    a.selectionSort();
    a.printArray();

    a.ascending = true;
    cout<<"merge sort ascending"<<endl;
    a.mergeSort(0, a.arraySize - 1);
    a.printArray();

    a.ascending = false;
    cout<<"merge sort descending"<<endl;
    a.mergeSort(0, a.arraySize - 1);
    a.printArray();
    
    a.ascending = true;
    cout<<"quick sort ascending"<<endl;
    a.quickSort(0, a.arraySize - 1);
    a.printArray();

    a.ascending = false;
    cout<<"quick sort descending"<<endl;
    a.quickSort(0, a.arraySize - 1);
    a.printArray();

    a.ascending = true;
    cout<<"heap sort descending"<<endl;
    a.heapSort(a.arraySize);
    a.printArray();

    a.ascending = false;
    cout<<"heap sort descending"<<endl;
    a.heapSort(a.arraySize);
    a.printArray();
    return 0;
}