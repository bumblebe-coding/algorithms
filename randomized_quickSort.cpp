#include<bits/stdc++.h>
using namespace std;

int random(int lower, int upper){ //function to generate a random number in a given range
    
    int num = (rand() %(upper - lower + 1)) + lower;
    return num;
}

void printArray(int* arr, int size){
    for(int i = 0 ; i < size; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int partition(int* arr, int start , int end){

    int index = random(start, end); //select a random index in the subarray
    swap(arr[start], arr[index]); //swap that random index with the first element of that subarray

    //continue with the normal quicksort partition subroutine

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

void randomized_quickSort(int* arr, int p, int r){
    if (p < r){ //this line is important as it controls the recursion calls
        int q = partition(arr, p , r);
        randomized_quickSort(arr, p, q-1);
        randomized_quickSort(arr, q+1, r);
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

    randomized_quickSort(arr, 0, n-1); 

    cout<<"the sorted array is: "<<endl;
   printArray(arr, n);
}