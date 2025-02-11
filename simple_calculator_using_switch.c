/*
A simple calculator program that takes two numbers and an arithmetic operation 
as input from the user and performs the corresponding calculation. 
The arithmetic operation should be entered as a character (+ for addition, - for subtraction, 
* for multiplication, / for division). Use a switch case statement to handle different operations.

Input: 

Enter number1, operator and number2: 10 * 7

Output: 70


*/

#include<stdio.h>
int main()
{
    int num1, num2;
    char op;
    scanf("%d %c %d",&num1, &op, &num2);
    
    switch(op)
    {
        case '+' :
        {
            printf("Output: %d", num1+num2);
            break;
        }
        case '-' :
        {
            printf("Output: %d", num1-num2);
            break;
        }
        case '*' :
        {
            printf("Output: %d", num1*num2);
            break;
        }
        case '/' :
        {
            printf("Output: %d", num1/num2);
            break;
        }
        default :
        {
            printf("Invalid operation!");
        }
    }
    return 0;
}