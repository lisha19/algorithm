#include <bits/stdc++.h>
using namespace std;

void insertionSort(int array[], int n)
{
	int  ele,j,i;
	for (i = 1; i < n; i++)
	{
		ele = array[i];
		j = i - 1;

		while (j >= 0 && array[j] > ele)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = ele;
	}
}


void printArray(int array[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
}

int main()
{
	int array[] = { 22, 1, 13, 51, 6 };
	int n = sizeof(array) / sizeof(array[0]);
    cout<<"Array before sorting: \n";
	printArray(array, n);
    cout<<"Array after Sorting: \n";
    insertionSort(array, n);
	printArray(array, n);

	return 0;
}

