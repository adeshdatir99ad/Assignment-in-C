//7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
    int i,j,a[3][3];
    printf("Enter first matrix elements(any 9 numbers): ");
    // First matrix
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    // lower triangular of a given matrix
    printf("\n****************************************************************\n");
    printf("lower triangular of a given Matrix: \n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            if (j>i)
            {
                a[i][j] = 0;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}