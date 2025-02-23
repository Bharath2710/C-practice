/*Copy odd and even elements into two separate arrays

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");


Instructions :-
Create array arr of user defined size
Read array elements and store in arr
Create odd_array and even_array of the same size as arr
Implement code to copy odd number to odd_array and even numbers to even_array
Print odd_array and even_array separately
Sample Execution:-

Case 1:

Enter array size: 5
Enter array elements: 1 2 3 4 5
Odd array elements: 1 3 5
Even array elements: 2 4
*/

#include<stdio.h>
int main()
{
   int size;
   printf("Enter array size:");
   scanf("%d",&size);
   
   int arr[size];
   int odd_array[size],even_array[size];  
   int odd_index=0,even_index=0;
   /*Read array elements*/
   for(int i = 0 ; i <size ;i++)
   {
       scanf("%d",&arr[i]); //0 1  2 3 4 
   }
   
   for( int i = 0 ; i < size ;i++)  //1 3 2 3 
   {
       
       if(  arr[i] % 2 == 0) //i =1    2 % 2 == 0, t 
       {
           even_array[even_index] = arr[i] ; // even_array[1] = 
           even_index++;//2
           
       }
       else
       {
           odd_array[odd_index] = arr[i];
           odd_index++;
       }
       
       
   }
   
   //loop to print odd array          i < odd_index;
   printf("Odd array elements: ");
   for(int i = 0; i < odd_index; i++)
   {
       printf("%d ",odd_array[i]);
   }
   //loop to print even array element i < even_index
   printf("\nEven array elements: ");
   for(int i = 0; i < even_index; i++)
   {
       printf("%d ",even_array[i]);
   }
   
   
   return 0;
   
   
    
}