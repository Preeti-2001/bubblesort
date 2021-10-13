// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *yp)
{
    int temp = *a;
    *a = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)	
	
	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout <<< endl;
}

// Driver code
int main()
{


	int arr[] = {64, 34, 25, 12, 22, 11, 90, 7, 8, 9, 1, 2, 3 , 6 , 5};

//Hii there
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	cout<<"Sorted array: \n";
	cout<<"Sorted array is: \n";
	printArray(arr, n);
	cout<<"HEllo hackober "<<767467+44;
	return 0;
}

// This code is contributed by rathbhupendra
