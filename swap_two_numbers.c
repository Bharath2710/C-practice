#include<stdio.h>

int main()
{
    int a, b, temp; // a =10 , b =20
    scanf("%d %d", &a, &b);
    printf("Before swap a = %d b = %d\n", a, b); // a =10 , b =20

    temp = a;
    a = b;
    b = temp;

    printf("After swap a = %d b = %d", a, b); // a =20 , b =10
}