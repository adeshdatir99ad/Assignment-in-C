//5. Write a program in C to find the sum of left diagonals of a matrix.
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
    
    // add left diag matrix
    printf("\n****************************************************************\n");
    printf("Sum of left diagonals of a matrix: \n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            sum = a[0][2] + a[1][1] + a[2][0];
            
        }
    }
    printf("%d ",sum);
    return 0;
}