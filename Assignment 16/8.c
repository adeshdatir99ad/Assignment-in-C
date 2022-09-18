//8. Write a program in C to print or display an upper triangular matrix.
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
    // Upper triangular of a given matrix
    printf("\n****************************************************************\n");
    printf("Upper triangular of a given Matrix: \n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            if (i>j)
            {
                a[j][i] = 0;
            }
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}