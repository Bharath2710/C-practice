/*program that takes a temperature in Fahrenheit as input and converts it to Celsius using the formula: 

celsius = (fahrenheit - 32) * 5/9

Declare fahrenheit as int and celsius as float.
*/
#include<stdio.h>
int main()
{
    int fahrenheit;
    float celsius;
    scanf("%d",&fahrenheit);
    
    celsius = ((float)fahrenheit -32) * 5/9;
    
    printf("%f",celsius);
    
    return 0;
}