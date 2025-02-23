/*
WAP to Create, Initialize and Print elements

Instructions to be followed in sequence :-
Create an integer array named arr of size 5
Initialize array with values 10, 20, 30, 40, 50
Print first, second and last element in the array
Store value 99 in arr[3]
Print arr[3]
*/

#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("%d %d %d\n",arr[0], arr[1],arr[4] );
    
    arr[3] = 99;
    
    printf("%d", arr[3]);
    
    return 0;
}