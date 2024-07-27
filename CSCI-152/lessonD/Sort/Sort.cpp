#include "Sort.h"

Sort::Sort()
{
    ascending = true;
    cout<<"initializing array with "<<arraySize<<" random values"<<endl;
    srand((unsigned) time(NULL));
    for(size_t i{0}; i < arraySize; ++i)
    {
        inputArray[i] = 1+rand()%99;
    }
}

void Sort::printArray()
{
    //cout<<"printing array values"<<endl;
	for (int i = 0; i<arraySize; i++)
	{
		cout << inputArray[i] << " ";
	}
	cout << endl;
}

void Sort::insertionSort()
{
	int insert;
    if(ascending)
    {
        cout<<"insertion sort ascending"<<endl;
        for (int next = 1; next < arraySize; ++next)
        {
            insert = inputArray[next];
            int moveItem = next;
            while ((moveItem>0) && (inputArray[moveItem - 1] > insert))
            {
                inputArray[moveItem] = inputArray[moveItem - 1];
                moveItem--;
            }
            inputArray[moveItem] = insert;
        }
    }
    else
    {
        cout<<"insertion sort descending"<<endl;
        for (int next = 1; next<arraySize; ++next)
        {
            insert = inputArray[next];
            int moveItem = next;

            while ((moveItem>0) && (inputArray[moveItem - 1]<insert))
            {
                inputArray[moveItem] = inputArray[moveItem - 1];
                moveItem--;
            }

            inputArray[moveItem] = insert;
        }
    }
}

void Sort::selectionSort()
{
    if(ascending)
    {
        cout<<"selection sort ascending"<<endl;
        for (int i = 0; i < arraySize; i++)
        {
            int min = i;
            for (int j = i+1; j<arraySize; j++)
            {
                if (inputArray[j] < inputArray[min]) min = j;
                if (inputArray[min] != inputArray[i])
                {
                    int t = inputArray[i];
                    inputArray[i] = inputArray[min];
                    inputArray[min] = t;
                }
            }
        }
    }
    else
    {
        cout<<"selection sort descending"<<endl;
        for (int i = 0; i < arraySize; i++)
        {
            int max = i;
            for (int j = i+1; j<arraySize; j++)
            {
                if (inputArray[j] > inputArray[max]) max = j;
                if (inputArray[max] != inputArray[i])
                {
                    int t = inputArray[i];
                    inputArray[i] = inputArray[max];
                    inputArray[max] = t;
                }
            }
        }
    }
}

void Sort::mergeSort(int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(l, m);
        mergeSort(m+1, r);

        merge(l, m, r);
    }
}

void Sort::merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1; 
    int n2 =  r - m;
    //int L[n1], R[n2];
    int *L = new int[n1];
    int *R = new int[n2];

    for (i = 0; i < n1; i++)
        L[i] = inputArray[l + i];
    for (j = 0; j < n2; j++)
        R[j] = inputArray[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    //ascending sort
    if(ascending)
    {        
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                inputArray[k] = L[i];
                i++;
            }
            else
            {
                inputArray[k] = R[j];
                j++;
            }
            k++;
        }
    }
    //descending sort
    else
    {
        while (i < n1 && j < n2)
        {
            if (L[i] >= R[j])
            {
                inputArray[k] = L[i];
                i++;
            }
            else
            {
                inputArray[k] = R[j];
                j++;
            }
            k++;
        }
    }

    while (i < n1)
    {
        inputArray[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        inputArray[k] = R[j];
        j++;
        k++;
    }
}

void Sort::quickSort(int low, int high)
{
    if (low < high)
    {
        // pi is partitioning index, arr[p] is now at right place
        int pi = partition(low, high);
 
        // Separately sort elements before partition and after partition
        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}

int Sort::partition (int low, int high)
{
    int pivot = inputArray[high];    // pivot
    int i = (low - 1);  // Index of smaller element
    //ascending
    if(ascending)
    {
        for (int j = low; j <= high - 1; j++)
        {
            // If current element is smaller than or equal to pivot
            if (inputArray[j] <= pivot)
            {
                i++;    // increment index of smaller element
                swap(&inputArray[i], &inputArray[j]);
            }
        }
    }
    else
    {
        //descending
        for (int j = low; j <= high - 1; j++)
        {
            // If current element is smaller than or equal to pivot
            if (inputArray[j] >= pivot)
            {
                i++;    // increment index of smaller element
                swap(&inputArray[i], &inputArray[j]);
            }
        }
    }
    swap(&inputArray[i + 1], &inputArray[high]);
    return (i + 1);
}

void Sort::swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void Sort::heapSort(int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(n, i);        
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&inputArray[0], &inputArray[i]);
        heapify(i, 0);
    }
}

void Sort::heapify(int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
    if(ascending)
    {
        if (l < n && inputArray[l] > inputArray[largest]) largest = l;
        if (r < n && inputArray[r] > inputArray[largest]) largest = r;
    }
    else
    {
        if (l < n && inputArray[l] < inputArray[largest]) largest = l;
        if (r < n && inputArray[r] < inputArray[largest]) largest = r;
    }

    if (largest != i)
    {
        swap(&inputArray[i], &inputArray[largest]);
        heapify(n, largest);
    }
}

Sort::~Sort()
{
    //cout<<"destructor"<<endl;
}