/*
Ticket price calculator program for a drama theater. The program determines the ticket price based on the age of the visitor, applying appropriate discounts for children and seniors.

Instructions:

Prompt the user to enter their age.
Based on the age provided, calculate the ticket price using the following rules:
Children under 5 years old can enter for free.
Children aged 5 to 12 receive a 50% discount on the regular ticket price.
Seniors aged 65 and above receive a 20% discount on the regular ticket price.
For all other age groups, the regular ticket price applies.
Display the calculated ticket price to the user.
*/

#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    
    if(age < 5)
    {
        printf("Children under 5 years old get in free!\nTicket price: Rs. 0.00");
    }
    else if((age >= 5) && (age <= 12))
    {
        printf("Ticket price: Rs. 50.00");
    }
    else if(age >= 65)
    {
        printf("Ticket price: Rs. 80.00");
    }
    else
    {
        printf("Ticket price: Rs. 100.00");
    }
    
    return 0;
}