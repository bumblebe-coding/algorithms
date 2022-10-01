#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int* arr, int size){
    for(int i = 0 ; i < size; i++){//we will run the process n -1 times, where n = size of the array
        for(int j = 0; j < size - i - 1; j++){//every time we start from the beginning
            if (arr[j] > arr[j+1]) //we compare two adjacent elements and swap them if they are out of order
            swap(arr[j], arr[j+1]);
        }
    }//by this way in each iteration, the largest element reaches the end of the array in a sorted manner
}

int main(){
    int n;
    cout<<"enter the number of elements in the array: "<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter the elements: "<<endl;

    for(int i = 0; i < n; i++)cin>>arr[i];
    cout<<"size of the arr is: "<<sizeof(arr)/sizeof(int)<<endl;

    cout<<"the unsorted array is: "<<endl;
    for(int i = 0; i < 5; i++)cout<<arr[i]<<" ";
    cout<<endl;

    bubbleSort(arr, n);

    cout<<"the sorted array is: "<<endl;
    for(int i = 0; i < n; i++)cout<<arr[i]<<" ";
    cout<<endl;
}