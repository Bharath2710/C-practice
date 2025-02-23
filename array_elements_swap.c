/*
WAP to Reverse elements in an array
Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Instructions :-
Define an array and read values from user
Print the elements before reversing using a loop
Reverse the array elements
Print the elements again using loop (Validate if the elements are reversed)
Sample Execution:-



Case 1:
Enter array size: 5
Enter array elements: 10 20 30 40 50
Elements before reversing:
10 20 30 40 50
Elements after reversing:
50 40 30 20 10

Case 2:
Enter array size: 5
Enter array elements: 20 10 40 50 30
Elements before reversing:
20 10 40 50 30
Elements after reversing:
30 50 40 10 20

Case 3:
Enter array size: 2
Enter array elements: 99 100
Elements before reversing:
99 100
Elements after reversing:
100 99
*/


#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size:");
    scanf("%d", &size);
    
    int arr[size];
    int temp;
    
    //Reading array elements from user
    printf("Enter array elements:");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    //printing array elements before reversing
    printf("Elements before reversing:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    //reversing of array elements to another array
    for(int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 -i];
        arr[size - 1 - i] = temp;
        
    }
    
    //printing the reversed elements
    printf("Elements after reversing:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
    
    
}