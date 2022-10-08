#include<bits/stdc++.h>
using namespace std;

void printArray(int* arr, int size){
    for(int i = 0 ; i < size; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int partition(int* arr, int start , int end){

    int pivot = arr[start];
    int i = start;

    for(int j = start +1; j<= end; j++){
        if(arr[j]<= pivot){
            i++;
            if (i != j) swap(arr[i], arr[j]);
        }
    }
    swap(arr[start], arr[i]);

    return i;

}

void quickSort(int* arr, int p, int r){
    if (p < r){ //this line is important as it controls the recursion calls
        int q = partition(arr, p , r);
        quickSort(arr, p, q-1);
        quickSort(arr, q+1, r);
    }
}

int main(){
    int n;
    cout<<"enter the number of elements in the array: "<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter the elements: "<<endl;

    for(int i = 0; i < n; i++)cin>>arr[i];

    cout<<"the unsorted array is: "<<endl;
    printArray(arr,n);

    quickSort(arr, 0, n-1); 

    cout<<"the sorted array is: "<<endl;
   printArray(arr, n);
}