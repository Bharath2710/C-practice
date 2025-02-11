/*
Print direction based on input char (N/S/E/W/n/s/e/w)
*/

#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    
    switch(ch)
    {
        case 'N':
        case 'n':
        {
            printf("North");
            break;
        }
        case 'S':
        case 's':
        {
            printf("South");
            break;
        }
        case 'E':
        case 'e':
        {
            printf("East");
            break;
        }
        case 'W':
        case 'w':
        {
            printf("West");
            break;
        }
        default :
        {
            printf("Invalid input");
        }
        
    }
    return 0;
}