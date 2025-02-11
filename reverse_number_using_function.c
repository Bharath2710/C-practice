/* C program to reverse the given number
Example n = 345
reverse  = 543
*/
#include <stdio.h>

int reverse(int num)
{
    int rem, reverse = 0;

    while(num != 0)
    {
        rem = num%10;     // '%' gives the remainder
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    return reverse;
}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Reverse of %d is %d", n, reverse(n));

    return 0;
}