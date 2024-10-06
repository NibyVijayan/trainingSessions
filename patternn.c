#include<stdio.h>
void main()
{
    int rows,i,j;
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++) 
        {
            if(j==0||j==rows-1||i==j) 
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
