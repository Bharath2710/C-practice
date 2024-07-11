#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d ", &a, &b);
    printf("Before swap a = %d b = %d\n", a, b); // a =10 , b =20

//swapping the variables
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap a = %d b = %d", a, b); // a =20 , b =10

    return 0;

    
}