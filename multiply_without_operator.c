/*
Program to read 2 integers from user and multiply two numbers without using multiplication operator
*/
#include<stdio.h>
int main()
{
    int a, b;
    int result = 0;
    
    printf("Enter the two numbers :");
    scanf("%d %d", &a, &b);
    
    while(b != 0)
    {
        result += a;
        b--;
    }
    printf("The Result is %d", result);
    
    return 0;
}