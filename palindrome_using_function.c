/* C program to check if the given number is palindrome or not
Example n = 121
*/
#include <stdio.h>

int palindrome(int num)
{
    int rem, temp, reverse = 0;

    temp = num;

    while(temp != 0)
    {
        rem = temp%10;     // '%' gives the remainder
        reverse = reverse * 10 + rem;
        temp /= 10;
    }
    return reverse;
}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n == palindrome(n))
    {
        printf("%d is Palindrome", n);
    }
    else{
        printf("%d is not Palindrome", n);
    }


    return 0;
}