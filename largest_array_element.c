/*Description : 

-Read the array size and array elements from the user.

-FInd the Largest element in the array.

Sample Execution : 

Test case 1 : 


Enter the size : 5

Enter the array elements : 5 100 -2 75 42

Largest element is : 100

Test case 2 :


Enter the size : 4

Enter the array elements : 2 -6 0 -4

Largest element is : 2

*/

#include<stdio.h>
int main()
{
    int size, largest;
    scanf("%d",&size);
    
    int arr[size];
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    
    for(int i = 0; i < size; i++)
    {
        if(largest < arr[i])
        {
            largest = arr[i];
        }
    }
    printf("Largest element is :%d",largest);
    
    return 0;
    
}