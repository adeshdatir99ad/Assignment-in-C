// 1. Write a program to calculate the sum of two matrices each of order 3x3
#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],add[3][3];
    printf("Enter first matrix elements(any 9 numbers): ");
    // First matrix
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    // Second Matrix
    printf("Enter second matrix elements(any 9 numbers): ");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    // add matrix
    printf("\n****************************************************************\n");
    printf("Resultant matrix is as follows: \n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            printf("%5d ",add[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}