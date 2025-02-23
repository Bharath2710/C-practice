/*Description : 

– Take equal size arrays 

– Arrays shall have unique values stored in random order 

– Array elements shall be entered by user 

– Arrays are compared “EQUAL” if there is one to one mapping of array elements value 

– Print final result “EQUAL” or “NOT EQUAL”

Sample Execution : 

Test case 1 : 

Enter the array1 size : 3

Enter the array2 size : 3

Enter the array1 elements : 2 -50 17

Enter the array2 elements : 17 2 -50

Array elements are equal.

Test case 2 :


Enter the array1 size : 4

Enter the array2 size : 4

Enter the array1 elements : 1 2 3 4

Enter the array2 elements : 3 4 1 5 

Array elements are not equal.

*/

#include<stdio.h>

int main()
{
    //decalre variables
    int size1, size2, flag;
    
    //ask the user for size of array1 and read the input from user
    printf("Enter the array1 size :");
    scanf("%d",&size1);
    
    //ask for size of array2 and read the input
    printf("Enter the array2 size : ");
    scanf("%d",&size2);
    
    //decalre arrays of user specified size
    int arr1[size1], arr2[size2];
    
    //reading the elements for array1 from user
    printf("Enter the array1 elements :");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    //reading the elements for array2
    printf("Enter the array2 elements :");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    
    //comapring the array elements of 2 arrays
    for(int i = 0; i < size1; i++)          // loop traveses through array1
    {
        flag = 0;                           //flag to update status of equal or not equal
        for(int j = 0; j < size2; j++)      //loop traverses through array2 
        {
            if(arr1[i] == arr2[j])
            {
                flag = 1;                    //sets flag=1 is the elements are same and breaks the loop
                break;
            }
        }
        if(flag == 0)                  //checks if the flag is updated or not, if not updated array is not equal any more, no need to check other elements
        {
            break;
        }
    }
    if(flag == 1)
    {
        printf("Array elements are equal");
    }
    else
    {
        printf("Array elements are not equal");
    }
    
    return 0;
}