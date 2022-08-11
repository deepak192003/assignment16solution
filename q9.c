// Write a program in C to accept a matrix and determine whether it is a sparse matrix
#include<stdio.h>
int  main()
{
    int matrix[4][4],i,j,rows,col,total=0;
    
    printf("Enter the number of rows and columns in matrix: ");
    scanf("%d%d",&rows,&col);
    printf("Enter elements of matrix: ");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
     for(i=0;i<rows;i++)
    {
        printf("\n");
        for(j=0;j<col;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(matrix[i][j]==0)
            {
                total++;
            }
        }
    }
    if(total>(rows*col)/2)
    {
        printf("Yes the given matrix is sparse matrix");
    }
    else
    {
        printf("No the given matrix is not sparse matrix");
    }
}