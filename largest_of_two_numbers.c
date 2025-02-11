/*
Print Largest of 2 integers after storing in a variable- v2

Using if else condition to find largest of two integers.
In this program store the largest value in a variable in the if else block
*/

#include<stdio.h>
int main()
{
    int num1, num2, largest;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1 > num2)
    {
        largest = num1;
    }
    else
    {
        largest = num2;
    }
    
    printf("Largest is %d", largest);
    
    return 0;
}