/*
Description: Suppose, in a week let us assume first day is 'Sunday', 
then second day will be 'Monday' and so on. 
If first day is 'Monday' then the second day will be 'Tuesday' and so on.
Sample Input: n = 9
              first_day = 2
Sample Output: The day is tuesday

*/

// include required header files
#include<stdio.h>

//start a main function
int main()
{
    //Declare variables for nth day, first day
    int n, start_day;
    int day;
    
    //ask the user to enter the n value
    printf("Enter the value of 'n' :");
    
    //read the value of n from user
    scanf("%d", &n);
    
    //Checking if n is in the range of 1 to 365
    if((n > 0) && (n < 366))
    {
        //printing the options for user to select the first day and ask user to select the first day
        printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
        printf("Enter the option to set the first day :");
        scanf("%d",&start_day);
            
        //condition to check if first day is within 1 to 7 range
        if((start_day > 0) && (start_day < 8))
        {
               //formula to get the value of the day that goes in the switch statement
            day = (start_day + (n-1)) % 7;
            
            //switch case to get the day based on the case values    
            switch(day)
            {
                //Different cases to print the days of week
                case 1:
                {
                    printf("The day is Sunday");
                    break;
                }
                case 2:
                {
                    printf("The day is Monday");
                    break;
                }
                case 3:
                {
                    printf("The day is Tuesday");
                    break;
                }
                case 4:
                {
                    printf("The day is Wednesday");
                    break;
                }
                case 5:
                {
                    printf("The day is Thursday");
                    break;
                }
                case 6:
                {
                    printf("The day is Friday");
                    break;
                }
                case 0:
                {
                    printf("The day is Saturday");
                    break;
                }
            }
                
        }
        else         //else part to show error if the user enters the first day out of range
        {
            printf("Error: Invalid input, first day should be > 0 and <= 7");
        }
            
    }
    else             //else part to show error if entered n value is not in range
    {
        printf("Error: Invalid input, n value should be > 0 and <= 365");
    }
    return 0;
    
}
