#include<bits/stdc++.h>
using namespace std;

void insertionSort(int* arr, int size){

    for(int i = 1; i < size; i++){//starts from the second element of the array
        int num = arr[i]; //storing the value in a separate variable
        int j = i - 1;//to compare all the values at lower indexes with value at index i

        while(j >= 0 && arr[j] > num){//if the value is larger than the value at ith index
            arr[j+1] = arr[j]; 
            j--;
        }
        
        arr[j+1] = num;
    }
}

int main(){
    //the main driver code which takes the array as an input and prints the sorted array:
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

    insertionSort(arr, n);

    cout<<"the sorted array is: "<<endl;
    for(int i = 0; i < n; i++)cout<<arr[i]<<" ";
    cout<<endl;
}
