// Write a program in C to find the sum of left diagonals of a matrix
#include<stdio.h>
int main()
{
    int matrix[10][10],i,j,sum=0,n;
    printf("Enter the number of rows and columns : ");
    scanf("%d",&n);
    printf("Enter the elements of a matrix: ");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==2)
            {   
                    sum=sum+matrix[i][j];
            }
        }
    }
    printf("sum of left diagonal of matrix is ");
    printf("%d",sum);
}