#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

void insertionSort(int arr[],int n)
{
   int i,key,j;
   for (i=1;i<n;i++)
   {
       key=arr[i];
       j=i-1;

       while (j>=0 && arr[j]>key)
       {
           arr[j+1]=arr[j];
           j=j-1;
       }
       arr[j+1]=key;
   }
}

void printArray(int arr[],int n)
{
   int i;
   for (i=0;i<n;i++)
       cout<<arr[i]<<" ";
   cout<<endl;
}

int main()
{
    cout<<"           INSERTIONSORT"<<endl;
    int n ;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
            arr[i] = rand()%100;
    cout<<"Unsorted array is : ";
    printArray(arr, n);

    insertionSort(arr,n);

   cout<<"Sorted array is : ";
    printArray(arr,n);

    return 0;
}
