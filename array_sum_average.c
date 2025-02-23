/*
WAP to Find sum and average of array elements

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Instructions to be followed in sequence :-
Prompt the user to enter size
Create an integer array named arr of user defined size
Prompt the user to enter elements
Read the individual elements using scanf and store it in the array (using loop)
Find the sum of all elements using loop
Find average of array elements, and store in float variable
Print sum and average
Sample output:

Enter the size: 5

Enter the array elements: 10 20 30 40 50

Sum: 150

Average: 30
*/

#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    
    int arr[size];
    int sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    float avg = (float)sum/size;
    
    printf("Sum: %d\nAverage: %f", sum, avg);
    
    return 0;
}