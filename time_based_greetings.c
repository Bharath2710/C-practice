/*
C program to print greetings based on time

Instructions:

The program prompts the user to enter hour (0-23).
It then reads the input number using scanf.
The program greets them based on the time using the "if-else if" statement.
Determine the corresponding greets based on the following ranges         
Good morning    :  5 - 11     
Good  afternoon : 12 - 15
Good evening     : 16 - 21
Good night         :  22 - 4
Invalid hour       :   greater than 23


*/

#include<stdio.h>
int main()
{
    int h;
    printf("Enter the hour (0-23):");
    scanf("%d",&h);
    
    if(h > 23)
    {
        printf("Invalid hour!");
    }
    else if((h>=5) && (h<=11))
    {
        printf("Good morning!");
    }
    else if((h>=12) && (h<=15))
    {
        printf("Good afternoon!");
    }
    else if((h>=16) && (h<=21))
    {
        printf("Good evening!");
    }
    else if((h>=22) || (h<=4))
    {
        printf("Good night!");
    }
    return 0;
}