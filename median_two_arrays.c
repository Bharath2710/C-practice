/*
Description:
In probability theory and statistics, a median is described as the number separating the higher half of a sample, 
a population, or a probability distribution, from the lower half. 
The median of a finite list of numbers can be found by arranging all the numbers 
from lowest value to highest value and picking the middle one.
Example:
 For getting the median of input array { 12, 11, 15, 10, 20 }, first sort the array. 
 We get { 10, 11, 12, 15, 20 } after sorting. Median is the middle element of the sorted array which is 12.
 
 Sample execution: -
Test Case 1: 

Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5                         
Test Case 2:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 4
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 13 7 5
Median of array1 : 4
Median of array2 : 9.5                                      
Median of both arrays : 6.75     
*/

#include<stdio.h>

int main()
{
    //declare sizes for both arrays, temp, median
    int size1, size2, temp;
    float median1, median2;
    
    //asking the user to enter size for array A and read them using scanf
    printf("Enter the 'n' value for Array A:");
    scanf("%d",&size1);
    
    //asking the user to enter size for array B and read using scanf
    printf("Enter the 'n' value for Array B:");
    scanf("%d",&size2);
    
    //declaring arrays A and B
    int A[size1], B[size2];
    
    //ask to enter the elements for array A and stored in array
    printf("Enter the elements one by one for Array A:");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d",&A[i]);
    }
    
    //ask to enter the elements for array B and store in array
    printf("Enter the elements one by one for Array B:");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d",&B[i]);
    }
    
    //sorting the array A
    for(int i = 0; i < size1-1; i++)             // loop to iterate for size -1 times
    {
        for(int j = 0; j < size1-i-1; j++)      //loop to fetch pair elements and perform swap operation for each pair
        {                                        //size -i -1 times because each time one element will be sorted
            if(A[j] > A[j+1])                    // condition to check if element is greater than next element 
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                
            }
        }
    }
    
    //sorting Array B
    for(int i = 0; i < size2-1; i++)           //loop to iterate for size -1 times
    {
        for(int j = 0; j < size2-i-1; j++)     //loop to fetch a pair and perform swap
        {
            if(B[j] > B[j+1])                 //condition to check if element is greater than next element
            {
                temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;
                
            }
        }
    }
    
    //finding the median of array A
    if(size1 % 2 == 0)         //checking if size is even or odd
    {
        median1 = (float)(A[size1/2] + A[(size1/2)-1])/2;    // if even median is average of middle two elements--> size/2 and (size/2)-1 indexes
    }
    else
    {
        median1 = A[size1/2];           //if odd median is the element in middle index
    }
    printf("Median of array1 : %g\n",median1);       //printing the median of array A
    
    //median for Array B
    if(size2 % 2 == 0)        //check for even or odd
    {
        median2 = (float)(B[size2/2] + B[(size2/2)-1])/2;    // if even median is average of middle two elements--> size/2 and (size/2)-1 indexes
    }
    else
    {
        median2 = B[size2/2];           //if odd median is the element in middle index
    }
    printf("Median of array2 : %g\n",median2);    //printing the median of Array B
    
    printf("Median of both arrays : %g",(median1 + median2)/2);    //printing the median of both arrays
    
    return 0;
}