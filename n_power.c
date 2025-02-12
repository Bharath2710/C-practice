/*
Program to read base value and exponential value from user and print the power of N series.
*/

#include<stdio.h>
int main()
{
    int b, e;
    int p = 1;
    
    printf("Enter the base value : ");
    scanf("%d", &b);
    printf("Enter the exponential value : ");
    scanf("%d", &e);
    
    for(int i = 0; i <= e; i++)
    {
        printf("%d ",p);
        p = p * b;
    }
    return 0;
}