/*
program that calculates and prints the grade for a given score based on predefined grade ranges.

Instructions:

Prompt the user to enter a numeric score.
Determine the corresponding grade based on the following ranges:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60
Display the calculated grade to the user.
*/

#include<stdio.h>
int main()
{
    int s;
    printf("Enter the score:");
    scanf("%d",&s);
    
    if((s>=90) && (s<=100))
    {
        printf("Your grade is A");
    }
    else if((s>=80) && (s<=89))
    {
        printf("Your grade is B");
    }
    else if((s>=70) && (s<=79))
    {
        printf("Your grade is C");
    }
    else if((s>=60) && (s<=69))
    {
        printf("Your grade is D");
    }
    else if(s<60)
    {
        printf("Your grade is F");
    }
    
    return 0;
}