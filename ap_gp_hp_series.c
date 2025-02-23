/*
Description :Program to print AP, GP, HP series
Sample Input: 
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5

Sample Output:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include<stdio.h>

int main()
{
    //Declare variables
    int A, R, N, temp;
    
    //ask user to give the first number, common difference/Ratio, number of terms
    printf("Enter the First Number 'A':");
    scanf("%d", &A);
    
    printf("Enter the common Difference / Ratio 'R':");
    scanf("%d", &R);
    
    printf("Enter the number of terms 'N':");
    scanf("%d", &N);
    
    if(N > 0)        //if condition to check if the N value is positive or not
    {
    
    //loop to print the AP series
    temp = A;     // assigning the value of A to temp
    printf("AP = ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", temp);
        temp += R;       // adding R to temp to print the next terms of series
    }
    
    
    //loop to print the GP series
    
    temp = A;             //assigning the value of A to temp
    printf("\nGP = ");
    for(int i = 0; i < N; i++)
    {
        printf("%d ",temp);
        temp *= R;           //multiplying temp with R to get net terms of series
    }
    
    //loop to print the HP series
    
    temp = A;
    printf("\nHP = ");
    for(int i = 0; i < N; i++)
    {
        printf("%f ", (float)1/temp);    //printing 1/temp to get the HP series, typecasting to float to get the decimal values
        temp += R;
    }
    }
    else    // if user gives a negative number as number of terms 
    {
        printf("Invalid input");
    }
    return 0;
    
}