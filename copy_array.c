/*
WAP to Copy an array to another
Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Instructions :-
Create array arr1 of user defined size
Read array elements and store in arr1
Create arr2 of the same size as arr1
Copy the element of arr1 into arr2
Print arr1 and arr2
Sample Execution:-

Case 1:

Enter array size: 5
Enter array elements: 1 2 3 4 5
Array1 elements: 1 2 3 4 5
Array2 elements: 1 2 3 4 5
Case 2:

Enter array size: 4
Enter array elements: 7 -3 2 5
Array1 elements: 7 -3 2 5
Array2 elements: 7 -3 2 5
*/

#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }
    printf("Array1 elements: ");
    
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr1[i]);

    }
    
    printf("\nArray2 elements: ");
    
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}