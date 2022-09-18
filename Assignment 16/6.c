// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum = 0;
    printf("Enter first matrix elements(any 9 numbers): ");
    // First matrix
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    // add matrix
    printf("\n****************************************************************\n");
    printf("Sum of rows of a Matrix: ");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            sum = sum + a[i][j];            
        }
    }
    printf("%d ",sum);

    // columns add 
    sum = 0;
    printf("\nSum of columns of a Matrix: ");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            sum = sum + a[j][i];            
        }
    }
    printf("%d ",sum);
    return 0;
}