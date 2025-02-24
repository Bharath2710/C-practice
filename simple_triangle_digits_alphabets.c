/*
Program to print the simple triangle pattern using alphabets and digits

A 
1 2 
A B C 
1 2 3 4 
A B C D E 
1 2 3 4 5 6

Sample Input: 6
Sample Output: 
A 
1 2 
A B C 
1 2 3 4 
A B C D E 
1 2 3 4 5 6

Sample Input: 10
Sample Output: 
A 
1 2 
A B C 
1 2 3 4 
A B C D E 
1 2 3 4 5 6
A B C D E F G
1 2 3 4 5 6 7 8
A B C D E F G H I
1 2 3 4 5 6 7 8 9 10

*/

#include<stdio.h>

int main()
{
    int num;

    scanf("%d",&num);

    for(int r = 1; r <= num; r++)
    {
        char ch = 'A';
        int n = 1;

        for(int c = 1; c <= r; c++)
        {
            if(r % 2 == 0)
            {
                printf("%d ",n);
                n++;
            }
            else
            {
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");
    }
    return 0;
}