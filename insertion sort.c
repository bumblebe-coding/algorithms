/* program to use insertion sort algorithm*/

#include <stdio.h>
int main()
{
    int n, i, j, t;
    int arr[100];
    printf("Enter number of elements you want to input: \n");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) 
    {
    scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) 
    {
        j = i;
    while (j > 0 && arr[j - 1] > arr[j]) 
    {
        t = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = t;
        j--;
    }
    }
    printf("Elements after applying Insertion sort:  ");
    for (i = 0; i < n; i++) 
    {
        printf("%d\n ", arr[i]);
    }
return 0;
}

