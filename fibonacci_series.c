/*
Description : Program to print fibonacci series till the given limit

Sample Input: Enter a number: 8

Output: 0 1 1 2 3 5 8

*/


#include<stdio.h>

int main()
{
    //Declare variables for the number, first term, second term, next term
    int num, first_term = 0, second_term = 1, next_term;
    
    //ask the user to enter a number and read the input from user
    printf("Enter a number:");
    
    scanf("%d", &num);
    
    //condition to check if the number is positive or negative
    if(num >= 0)
    {
        //while loop to print the fibonacci series
        while(first_term <= num)
        {
            printf("%d ",first_term);               //printing the terms of fibonacci series
            
            next_term = first_term + second_term;   //fibonacci rule number is sum of previous two digits after 0 and 1
            
            first_term = second_term;
            second_term = next_term;            //swapping logic to shift the numbers 
        }
        
    }
    else
    {
        printf("Invalid input");  //Print error message if the num is not positive
    }
    
    return 0;
    
    
}
