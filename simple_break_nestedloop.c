#include<stdio.h>
int main()
{
    int i, j;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("i = %d, j = %d\n", i ,j);
            
            if(j == 3)
            {
                printf("Breaking j loop at %d\n",j);
                break;
            }
        }
        
    }
    return 0;
}