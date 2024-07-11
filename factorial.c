/*Factorial of number is product of the integers from 1 to N
Example: N =5
Factorial of 5 => 5x4x3x2x1 = 120 */


#include <stdio.h>
 
int main()
{
    int num,i;
    long int fact;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
  
    fact=1;
    for(i=num; i>=1; i--)
    {
        fact=fact*i;
    }

    //for(i=1; i<=num; i++) Same as above, just iterating i from 1 to num
    //fact = fact * i;        


    printf("\nFactorial of %d is = %ld",num,fact);
      
    return 0;
}
