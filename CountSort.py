
def counting_sort(List_to_be_Sorted, largest): #Function for sorting the elements 

    count = [0]*(largest + 1) #Initialize count array

    for i in range(len(List_to_be_Sorted)): 
        count[List_to_be_Sorted[i]] = count[List_to_be_Sorted[i]] + 1 # Store the count of each elements in count array 
    count[0] = count[0] - 1 #Decrementing the value of the element at position at 0

    for i in range(1, largest + 1):
        count[i] = count[i] + count[i - 1] # Cummulative count

    result = [None]*len(List_to_be_Sorted) #[None] is a list with one element the is multiplied with length of array List_to_be_Sorted


    for x in reversed(List_to_be_Sorted): # Copy sorted elements 
        result[count[x]] = x #This is used to identify the element that will be copied in array count
        count[x] = count[x] - 1 #Here the value is sorted in the array count
    return result #Used to return the sorted array
 
 
List_to_be_Sorted = input('Enter the list to be Sorted(Non negative): ').split()
List_to_be_Sorted = [int(x) for x in List_to_be_Sorted] #converting into list
k = max(List_to_be_Sorted) #Storing the highest value
Sorted_List = counting_sort(List_to_be_Sorted, k) #Calling the function
print('Sorted list: ', end='')
print(Sorted_List)