/*
Program to convert temparature from Fahrenheit to Celcius
*/
#include<stdio.h>
int main()
{
    float fahrenheit, celsius;
    scanf("%f",&fahrenheit);
    
    celsius = (fahrenheit - 32) *5/9;
    
    printf("%f", celsius);
    
    return 0;
    
}