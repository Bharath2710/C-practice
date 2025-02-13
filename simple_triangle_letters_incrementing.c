/*
Program to Print Simple Triangle with letters Incrementing
*/
#include<stdio.h>
int main()
{
    int lines;
    char ch = 'A';
    scanf("%d",&lines);
    
    for(int r = 0; r < lines; r++)
    {
        for(int c = 0; c <= r; c++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}