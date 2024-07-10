#include<stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d", &a, &b); // takes the input from the user, user need to enter two values seperated by space in terminal

    c = a + b;
    printf("%d ", c);

    printf("%d", a + b); //this is equal to above two lines

    return 0;

}