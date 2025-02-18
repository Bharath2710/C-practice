/*
Program to read a n value from user and print n power of two series. 


*/

#include <stdio.h>
int main()
{
    int n;
    int p = 1;
    scanf("%d",&n);
    
    if(n > 0)
    {
        for(int i = 0; i < n; i++)
        {
            
            printf("%d ", p);
            p = p * 2;
        }
        
    }
    else
    {
        printf("Error : Number should be an positive number.");
    }
    return 0;
}