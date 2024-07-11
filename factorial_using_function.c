/*Factorial of number is product of the integers from 1 to N
Example: N =5
Factorial of 5 => 5x4x3x2x1 = 120

program to find factorial of a number using user defined function.*/
 
#include <stdio.h>
 
int factorial(int n)
{
    int fact = 1;

    if(n == 1)
        return fact;
    else
    {
        for(int i=1; i<=n; i++)
        {
            fact *= i;
        }

    }

   
    return fact;
}
 
  
int main()
{
    int num;
 
    printf("Enter an integer number :");
    scanf("%d",&num);
 
    printf("\nFactorial of %d is = %d",num,factorial(num));
     
    return 0;
}

