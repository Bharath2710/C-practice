/*WAP to Check whether an element is present in array or not
Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");

Instructions :-
Define an array of user defined size
Read the elements from user
Prompt the user to enter a variable to search (It should be declared first)
Run a loop to check if the value is found in the array
If it is found - Print element is found
Otherwise, Print not found
Sample Execution:-



Case 1:
Enter array size: 5
Enter array elements: 20 10 40 50 30
Enter the element to search: 30
Element Found

Case 2:
Enter array size: 5
Enter array elements: 20 10 40 50 30
Enter the element to search: 99
Not Found

Case 3:
Enter array size: 5
Enter array elements: 20 10 40 50 30
Enter the element to search: 20
Element Found*/

#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int search;
    int flag = 0;
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &search);
    
    for(int i = 0; i < size; i++)
    {
        if (search == arr[i])
        {
            flag = 1;
            break;
            
        }
    }
    
    if(flag == 1)
    {
        printf("Element Found");
    }
    else
    {
        printf("Not Found");
    }
    
    return 0;
    
}