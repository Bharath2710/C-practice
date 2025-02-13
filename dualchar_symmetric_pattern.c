/*
Description : 

- Read total (n) number of pattern chars in a line (number should be “odd”)

- Read number (m) of pattern char to be printed in the middle of line (“odd” number)

- Print the line with two different pattern chars

- Example – Let's say two types of pattern chars '$' and '*' to be printed in a line. Total number of chars to be printed in a line are 9. Three '*' to be printed in middle of line.

Sample Execution : 

Test case 1 : 

Enter n : 9

Enter m : 3

$$$***$$$

*/
#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    
    if((n%2 != 0) && (m%2 != 0))
    {
        for(int i = 0; i < n; i++)
        {
            if(i < (n-m)/2 || (i >= (n-m)/2 +m))
            {
                printf("$");
            }
            else
            {
                printf("*");
            }
        }
    }
    return 0;
}