
#include <stdio.h>
int main()
{  
int num, i,  search, ans = 0;
printf("Enter the number of elements you want to enter:  ");
scanf("%d", &num);
int array[num];
printf("Enter the elements: \n");
for (i = 0; i < num; i++)
{
scanf("%d", &array[i]);
}
printf("Enter the element you want to search: \n");
scanf("%d", &search);
for (i = 0; i < num ; i++)
{
if (search == array[i] )
{
ans = 1;
break;
}
}
if (ans == 1)
printf("Element is present in the array at position %d", i+1);
else
printf("Element is not present in the array\n");
return 0;
}
