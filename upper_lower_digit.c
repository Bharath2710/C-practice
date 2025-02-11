/*
Program to read a characer and check it is  upper case, lower case, digit or none.
*/
#include<stdio.h>
int main()
{
    char ch;
    //printf("Enter the character :");
    scanf("%c",&ch);
    
    if((ch >= 65) && (ch <= 90))
    {
        printf("The character is Upper Case.");
    }
    else if((ch >= 97) && (ch <=122))
    {
        printf("The character is Lower Case.");
    }
    else if((ch >= 48) && (ch <= 57))
    {
        printf("The character is Digit.");
    }
    else
    {
        printf("The character not an alphabet or digit.");
    }
    
    return 0;
}
