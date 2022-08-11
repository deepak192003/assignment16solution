// Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
    int matrix[5][5],i,j,n;

    printf("Enter the number of rows and columns in matrix: ");
    scanf("%d",&n);

    printf("Enter the elements of given matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The given matrix is : ");
     for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Matrix in lower triangular: ");
     for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            if(i>=j)
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