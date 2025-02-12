/*
Program to Reverse a Positive number
*/

#include<stdio.h>
int main()
{
    int num;
    int rev = 0;
    
    scanf("%d",&num);
    if(num >= 0)
    {
        while(num!=0)
        {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        printf("Reversed number is %d", rev);
    }
    else if(num < 0)
    {
        printf("Please enter a positive integer");
    }
    return 0;
}