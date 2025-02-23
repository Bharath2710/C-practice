/*
WAP to Read Array from User & Print them using Loop

Instructions to be followed in sequence :-
Create an integer array named arr of size 5
Prompt the user to enter 5 elements
Read the individual elements using scanf and store it in the array (using loop)
Print all the elements using a separate loop
*/

#include<stdio.h>
int main()
{
    int arr[5];
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}