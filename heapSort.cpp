#include <iostream>
#include<cstdlib>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {

        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    cout<<"           HEAPSORT"<<endl;
    int n ;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
            arr[i] = rand()%100;
    cout<<"Before Sorting: ";

    printArray(arr, n);
     n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout <<endl<< "Sorted array is ";
    printArray(arr, n);
}
