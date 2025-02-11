/*C program to calculate the simple interest for a given principal amount, rate of interest, and time period.
Prompt the user to enter the principal amount, rate of interest, and time period in years.
Calculate the simple interest using the formula: Simple Interest = (Principal Amount * Rate of Interest * Time) / 100.*/
#include<stdio.h>
int main()
{
    float p;
    int r, t;
    float si;
    scanf("%f %d %d", &p, &r, &t);
    si = (p*r*t)/100;
    
    printf("%g", si);
    
    return 0;
}