#include<stdio.h>
int main()
{
    int i = 1;
    while(i < 10)
    {
        printf("%d", i);
        
        if(i == 5)
        {
            printf("Breaking loop at %d",i);
            break;
        }
        i++;
    }
    return 0;
}