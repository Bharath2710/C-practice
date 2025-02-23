/*
Description:
Read a number from user. Let's say if number is 5, you need to print numbers in pyramid pattern as shown below:
If n = 5, then,
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

Sample Input & Output:

Enter the number: 4
4
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4

*/

#include<stdio.h>
int main()
{
    //declare variable
    int num;
    
    //ask the user to enter the number to print the pattern and read the input from user
    printf("Enter the number:");
    scanf("%d", &num);
    
    //loops to print the pattern
    //for loop to print the first half of pattern
    for(int row = num; row >= 1; row--)        //row starts with num and decrements till 1
    {
        for(int col = row; col <= num; col++)  //col starts with row and increments till n
        {
            printf("%d ",col);                //prints col value
        }
        printf("\n");
    }
    //for loop to print the 2nd half
    for(int row = 2; row <= num; row++)       //row starts with 2 and increments till n
    {
        for(int col = row; col <= num; col++) // col starts with row and increments till n
        {
            printf("%d ",col);               //prints col value
        }
        printf("\n");
    }
    return 0;
    
}