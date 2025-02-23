/*WAP to Count even and odd numbers in an array

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");

Instructions :-
Define an array and read values from user
Define even_count and odd_count
Using a single loop count the even elements and odd elements in the array
Print Number of even and odd elements in the array
Sample Execution:-

Case 1:

Enter array size: 5
Enter array elements: 1 2 3 4 5
Even count: 2
Odd count: 3

Case 2:
Enter array size: 5
Enter array elements: 20 10 40 50 31
Even count: 4
Odd count: 1

Case 3:
Enter array size: 1
Enter array elements: 99
Even count: 0
Odd count: 1
*/

#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int even_count =0;
    int odd_count = 0;
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        
        if(arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Even count: %d\n",even_count);
    printf("Odd count: %d", odd_count);
    
    return 0;
    
}