/*
  Алгоритмы поиска. Линейный поиск.
 */

#include<iostream>
using namespace std;

int linearSearch(const int [], int, int);

int main()
{
	const int arraySize = 10;
	int array[arraySize];
	int searchKey;

	for(int i = 0; i<arraySize; i++)
	{
		array[i] = 2*i;
		cout<<array[i]<<" ";
	}

	cout<<endl<<"Введите цифру которую необходимо найти в массиве:"<<endl;
	cin>>searchKey;

	int element = linearSearch(array, searchKey, arraySize);

	if(element != -1)
	{
		cout<<"Номер цифры в массиве: "<<element<<endl;
	}
	else
	{
		cout<<"Цифра не найдена"<<endl;
	}
	return 0;
}

int linearSearch(const int arrayF[], int keyF, int arraySizeF)
{
	for(int j = 0; j<arraySizeF; j++)
	{
		if(arrayF[j] == keyF)
		{
			return j;
		}
	}
	return -1;
}