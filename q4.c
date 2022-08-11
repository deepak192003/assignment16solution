// 4. Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>
int main()
{
    int matrix[3][3],sum=0,i,j;
    printf("Enter elements of matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+matrix[i][i];
            }
        }
    }
    printf("Sum of right diagonal matrix is ");
    printf("%d",sum);
}