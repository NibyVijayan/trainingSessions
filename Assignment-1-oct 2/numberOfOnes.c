/*  Program: Counting Number of 1's in binary Representation of the number.
    Author: Niby Vijayan
    Date: 02-10-2024
*/
#include<stdio.h>
void countingNumberOfOnes(int number);
void main()
{
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    countingNumberOfOnes(number);   
}

//function for counting Number of 1's in Binary Representation of the number.
void countingNumberOfOnes(int number)
{
    int count=0;
    int newNumber=number;
    while(newNumber>0)  
    {
        if(newNumber%2==1)  //check if the remainder is 1
        {
            count++;    
        }
        newNumber=newNumber/2; 
    }
    printf("the number of 1's in the binary of %d is %d ",number,count);
}