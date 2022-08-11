// 3. Write a program in C to find the transpose of a given matrix.//
#include<stdio.h>
int main()
{
    int matrix[4][4],i,j,transpose[4][4],temp;

    printf("Enter the elements of matrix: ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            transpose[i][j]=matrix[j][i];
        }
    }
    printf("Transpose of matrix: ");
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {

            printf("%d\t",transpose[i][j]);    
}
printf("\n");
    }
}