/*C program to find the sum of digits in a number
N = 12345
sum = 15*/
#include<stdio.h>

int sumofdigits(int n)
{
    int rem, sum = 0;
    while(n != 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("Sum of digits is %d", sumofdigits(num));

    return 0;
}

