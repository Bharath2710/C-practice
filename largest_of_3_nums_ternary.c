/*
Program to find the largest of three numbers using a ternary opeartor
Sample Input : 10 20 30
Sample Output: 30 

Sample Input : 25 99 63
Sample Output: 99
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d %d %d",&a,&b,&c);
    
    int large = (a>b)?((a>c)? a: c) : ((b>c)? b: c);   
                                                                       //any one of the two can be used, both gives same Output
    int large1 = ((a>b) && (a>c))? a: (((b>c) && (b>a))? b: c);
    
    printf("%d\n",large);
    
    printf("%d",large1);
    
    return 0;
}