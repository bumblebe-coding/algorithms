#include<bits/stdc++.h>
using namespace std;

void printArray(int* arr, int size){
    for(int i = 0 ; i < size; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void selectionSort(int* arr, int n){
    for (int i = 0; i < n-1; i++){
        int min = i;//we take the first element in each iteration to be the minimum element
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min]) min = j;
        }

        if(min != i) swap(arr[i], arr[min]); //if we find any index where the element is lower than the
        //minimum element we swap the values
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

    selectionSort(arr, n); //basically we find the minimum element in each iteration in the array

    cout<<"the sorted array is: "<<endl;
   printArray(arr, n);
}
    
