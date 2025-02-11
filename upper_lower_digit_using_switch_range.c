/*
Using Switch Case Range - Check character is Uppercase, Lowercase, Digit


Prompt the user to enter a character.
Check whether the character is :
Upper case: A-Z
Lower case: a-z
Digit: 0-9
None of the above
*/


#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    
    switch (ch)
    {
        case 65 ... 90 :
        {
            printf("Character is Uppercase");
            break;
        }
        case 97 ... 122 :
        {
            printf("Character is Lowercase");
            break;
        }
        case 48 ... 57 :
        {
            printf("Character is a digit");
            break;
        }
        default :
        {
            printf("Not an alphabet or digit");
        }
    }
    return 0;
}