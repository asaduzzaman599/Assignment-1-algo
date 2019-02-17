#include <iostream>
#include<cstdlib>
using namespace std;

void printArray(int *a, int n)
{
    int i=0;
    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }

    cout<<endl;
}

void swap(int i,int j, int *a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void quicksort(int *arr, int left, int right){
    int min = (left+right)/2;
    int i = left;
    int j = right;
    int pivot = arr[min];

    while(left<j || i<right)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

        if(i<=j){
            swap(i,j,arr);
            i++;
            j--;
        }
        else{
            if(left<j)
                quicksort(arr, left, j);
            if(i<right)
                quicksort(arr,i,right);
            return;
        }
    }
}

int main() {
    cout<<"         QUICKSORT"<<endl;
    int n ;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
            arr[i] = rand()%100;
    cout<<"Unsorted array is : ";
    printArray(arr, n);
    quicksort(arr, 0, (sizeof(arr)/sizeof(arr[0]))-1);

    cout<<"Sorted array is : ";
    printArray(arr, (sizeof(arr)/sizeof(arr[0])));
    return 0;
}
