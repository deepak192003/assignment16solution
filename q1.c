// Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
   int first[3][3],second[3][3],add[3][3],i,j;

   printf("Enter the elements of first matrix: ");
   for(i=0;i<3;i++)
   {
        for(j=0;j<3;j++)
        {
            scanf("%d", &first[i][j]);
        }
   }
   printf("Enter the elements of second matrix: ");
   for(i=0;i<3;i++)
   {
        for(j=0;j<3;j++)
        {
            scanf("%d",&second[i][j]);
        }
   }
   printf("Addition of these two matrix is : ");

   for(i=0;i<3;i++)
   {
        for(j=0;j<3;j++)
        {
            add[i][j]=first[i][j]+second[i][j];
        }
   }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",add[i][j]);
        }
        printf("\n");
    }
}