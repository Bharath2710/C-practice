/*
Check for Positive/Negative and Even/Odd


Prompt the user to enter a number
Determine whether number is:
Positive and Even, Or
Positive and Odd, Or
Negative and Even, Or
Negative and Odd. Or
It is Zero
Used Nested if to implement this program
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    if(num > 0)
    {
        if((num % 2) == 0)
        {
            printf("The number %d is positive and even",num);
        }
        else
        {
            printf("The number %d is positive and odd ",num);
        }
    }
    else if(num < 0)
    {
        if((num % 2) == 0)
        {
            printf("The number %d is negative and even",num);
        }
        else
        {
            printf("The number %d is negative and odd",num);
        }
    }
    else
    {
        printf("The number is zero");
    }
    return 0;
}