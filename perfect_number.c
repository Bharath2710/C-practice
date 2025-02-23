/*
Description: Program to print if the given number is perfect or not

Sample Input: Enter a number: 6
Sample output: Entered number is perfect
*/

#include<stdio.h>
int main()
{
    //Declare variables num. sum 
    int num, sum = 0;
    //ask the user to enter a number using printf and read the number as input with scanf
    printf("Enter a number: ");
    scanf("%d",&num);
    
    //check if the entered number is positive or not
    if(num > 0)
    {
        //for loop to get the divisors and them to the sum
        for(int i = 1; i <= num/2; i++)
        {
            //if condition to get the perfect divisors using modulo operator
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }
        //condition to check if the sum of divisors is equal to the number
        if(num == sum)
        {
            printf("Yes, entered number is perfect number");         //prints perfect number
        }
        else
        {
            printf("No, Entered number is not a perfect number");    //prints not perfect number
        }
    }
    else
    {
        //printing a error message if user enters a negative number
        printf("Error : Invalid Input, Enter only positive number");
    }
    
    
    return 0;
    
    
}