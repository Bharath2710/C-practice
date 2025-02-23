#include<stdio.h>
int main()
{
    int limit, prime = 0;
    printf("Enter a limit:");
    scanf("%d",&limit);
    
    for(int i = 2; i <= limit; i++)
    {
        for(int j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                prime = 1;
                break;
            }
            else
            {
                prime = 0;
            }
        }
        if(prime == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}