/*
Description: 
Read a number from user. Let's say if number is 5, you need to print numbers in X pattern as shown below:
If n = 5, then,
1___5
_2_4_
__3__
_2_4_
1___5
Note:- Please consider '_' as space. 

Sample Input:
Enter the number: 4

Sample Output:
1  4
 23
 23
1  4

Sample Input:
Enter the number: 5

Sample Output:
1   5
 2 4
  3
 2 4
1   5


*/

#include<stdio.h>

int main()
{
    //declare variable
    int num;
    
    //ask the user to enter a number and read input from the user
    printf("Enter the number:");
    scanf("%d", &num);
    
    //here the pattern can be seen as two diagonals
    //loops to print the pattern in the form of X
    
    //1st for loop for the rows
    for(int row = 1; row <= num; row++)
    {
        //2nd for loop for columns
        for(int col = 1; col <= num; col++)
        {
            //checking conditions using the if-else condition
            if(row == col)          // condition to check if row is equal to col
            {
                printf("%d",row);   //this prints the diagonal where the row no and column no is same 
            }
            else if(row + col == num + 1)  //condition for another diagonal
            {
                printf("%d", col);       //printing the col value as the diagonal and col numbers are same
            }
            else
            {
                printf(" ");       //prints the white spaces elsewhere parts
            }
        }
        printf("\n");  //new line for each row
    }
    
    return 0;
}