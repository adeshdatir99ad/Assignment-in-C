// 4. Write a program in C to find the sum of right diagonals of a matrix.
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
    
    // add right diag matrix
    printf("\n****************************************************************\n");
    printf("Sum of right diagonals of a matrix: \n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            sum = a[0][0] + a[1][1] + a[2][2];
            
        }
    }
    printf("%d ",sum);
    return 0;
}