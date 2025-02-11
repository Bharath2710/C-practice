/*Program to find the avearge of Float variables
input : 1.0 2.0 5.0
Output = 2.6667
*/

#include<stdio.h>
int main()
{
    float a,b,c; //declaring float vaariables
    float avg;
    scanf("%f %f %f", &a, &b, &c);
    avg = (a+b+c)/3;      //average = a+b+c/3
    printf("%f", avg);
    
    return 0;
    
}