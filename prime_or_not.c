#include <stdio.h>

int main()
{
    //Write logic to check the given number is prime or not
    int num;
    int prime = 0;
    
    //printf("Enter a number:");
    scanf("%d",&num);
    
    if(num > 1)
    {
        for(int i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                prime = 1;
                break;
            }
        }
        if(prime == 0)
        {
            printf("%d is a prime number",num);
        }
        else
        {
            printf("%d is not a prime number",num);
        }
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
    
}