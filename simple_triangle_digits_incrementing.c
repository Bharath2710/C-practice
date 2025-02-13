/*
Print Simple Triangle Digits Incrementing
*/
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i = 1;
    
    for(int r = 0; r < num; r++)
    {
        for(int c = 0; c <= r; c++)
        {
            printf("%d ",i);
            i++;
        }
        printf("\n");
    }
    return 0;
}