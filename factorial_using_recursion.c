/*Factorial of number is product of the integers from 1 to N
Example: N =5
Factorial of 5 => 5x4x3x2x1 = 120

program to find factorial of a number using recursion.*/
 
#include <stdio.h>
 
int factorial(int n)
{
    if(n == 1)
    return 1;

    return n*factorial(n-1);

}


  
int main()
{
    int num;
 
    scanf("%d",&num);
 
    printf("\nFactorial of %d is = %d",num,factorial(num));
     
    return 0;
}

