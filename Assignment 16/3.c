// 3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3];
    printf("Enter first matrix elements(any 9 numbers): ");
    // First matrix
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    // transpose matrix
    printf("\n****************************************************************\n");
    printf("Resultant matrix is as follows: \n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            b[i][j] = a[j][i];
            printf("%5d ",b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}