#include<stdio.h>
int main()
{
    int matrix[4][4],i,j,n;
    printf("Enter the number of rows and columns in matrix: ");
    scanf("%d",&n);
    printf("Enter elements of given matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the given matrix is : ");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("matrix in upper triangular form ");
     for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            if(i<=j)
            {
                printf("%d\t",matrix[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}