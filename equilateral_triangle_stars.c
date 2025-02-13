/*
Program to print a star pattern of Equilateral triangle
*/
#include<stdio.h>
int main()
{
    int n;                                          // variable n for number of lines
    scanf("%d", &n);                                 //to read value of n from the user
    
    for(int r = 1; r <= n; r++)                      //for loop with r for no of rows in the traingle
    {
        for(int space = 1; space <= n-r; space++)   //for loop to print the empty spaces
        {
            printf(" ");                            //prints the empty spaces 
        }
        for(int star = 1; star <= 2*r -1; star++)    // for loop to print the stars
        {
            printf("*");                             //prints the stars
        }
        printf("\n");                                 //prints a new line
    }
    return 0;
}