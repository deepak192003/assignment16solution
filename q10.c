// Write a program in C to find the row with maximum number of 1s
#include<stdio.h>
int main()
{
    int matrix[4][4],i,j,rows,col,count=0,arr[4],m=0,element;
    printf("Enter the number of rows and column of a matrix: ");
    scanf("%d%d",&rows,&col);
    printf("Enter the number of elements: ");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The given matrix is ");
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
       count=0;
        for(j=0;j<col;j++)
        {
            if(matrix[i][j]==1)
            {
                count++;
                
            }
            
        }
         printf("Number of 1s in %d row are %d\n",i+1,count);
    }
}