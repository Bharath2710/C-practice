/*
10 20 30   n2>n1, n2<n3      n1<n2, n3>n2
30 20 10   n2<n1, n2>n3

20 10 30    n1>n2, n1<n3
20 30 10    n1<n2, n1>n3

10 30 20   n3>n1, n3<n2
30 10 20   n3<n1, n3>n2


*/
#include<stdio.h>
int main()
{
    int n1, n2, n3;
    scanf("%d %d %d",&n1, &n2, &n3);


    if(n1>n2)
    {
        if(n1<n3)
        {
            printf("%d",n1);
        }
        else
        {
            if(n2>n3)
            {
                printf("%d",n3);
            }
            else
            {
                printf("%d",n2);

            }
            
        }
    }
    else
    {
        if(n2<n3)
        {
            printf("%d",n2);
        }
        else
        {
            if (n1>n3)
            {
                printf("%d",n1);
            }
            else
            {
                printf("%d",n3);
            }
            
            
        }

    }
    return 0;
}