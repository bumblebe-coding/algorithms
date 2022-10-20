
#include <stdio.h>

int main()
{
int i, low, high, mid, n, value, array[100];
printf("Enter number of elements you want to input: \n");
scanf("%d",&n);
printf("Enter the elements: \n");
for(i = 0; i < n; i++){
scanf("%d",&array[i]);
}
printf("Enter value to find: \n");
scanf("%d", &value);
low = 0;
high = n - 1;
mid = (low+high)/2;

while (low <= high){
if(array[mid] < value)
low = mid + 1;
else if (array[mid] == value) {
printf("the value is found at %d \n", mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("The value is not found! \n");

return 0;
}
