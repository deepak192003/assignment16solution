// 2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int firstmatrix[2][2],secondmatrix[2][2],multiply[2][2],i,j,sum=0,k;
    printf("Enter the elements of first matrix: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&firstmatrix[i][j]);

        }
    }
    printf("Enter the elements of second matrix: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&secondmatrix[i][j]);
            
        }
    }
    printf("Multiplication of these two matrix is : ");
    for(i=0;i<2;i++) //row
    {
        
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
            {
                 sum=sum+firstmatrix[i][k]*secondmatrix[k][j]; 
                 multiply[i][j]=sum;
            }
          
        }

    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",multiply[i][j]);
        }
        printf("\n");
    }
}