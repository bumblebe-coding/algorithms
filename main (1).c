
#include <stdio.h>

int main()
{
    int arr[100], num, x, y, temp;  
    printf("Enter the Number of Elements you want to input: ");
    scanf("%d", &num);   
    printf("Enter the Values of the Elements: \n");
    for(x = 0; x < num; x++){
    scanf("%d", &arr[x]);
    }
    x = 0;
    while(x < num - 1){
    y = 0;        
    while(y < num - x - 1){
        if(arr[y] > arr[y + 1]){
            temp = arr[y];
            arr[y] = arr[y + 1];
            arr[y + 1] = temp;
        }
        y++;
    }       
    x++;
    }   
    printf("Final Result after applying Bubble Sort: ");
    for(x = 0; x < num; x++){
    printf("%d  ", arr[x]);
    }
    return 0;
}
