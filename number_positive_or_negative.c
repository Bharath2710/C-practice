/*
Check whether number is positive or negative
Using if else condition
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    if(num > 0)
    {
        printf("%d is positive",num);
    }
    else
    {
        printf("%d is negative",num);
    }
    
    return 0;
}