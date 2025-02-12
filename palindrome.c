/*
Program to read a number from user, print the number is palindrome or not
*/

#include<stdio.h>
int main()
{
    int num, temp;
    int pal = 0;
    
    printf("Enter the number : ");
    scanf("%d",&num);
    
    temp = num;
    
    while(temp != 0)
    {
        pal = pal * 10 + temp % 10;
        temp = temp / 10;
    }
    
    if(pal == num)
    {
        printf("The Entered number is an palindrome.");
    }
    else
    {
        printf("The Entered number is not an palindrome.");
    }
    
    return 0;
}