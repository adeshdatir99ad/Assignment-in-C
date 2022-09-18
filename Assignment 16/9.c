// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int count = 0,i,j,a[3][3];
    printf("Enter first matrix elements(any 9 numbers): ");
    // First matrix
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
            if (a[i][j]==0)
            {
                ++count;
            }
            
        }
        
    }
    // sparse matrix (3*3/2 = 4 se jayda 0 hona chaiye to sparse matrix )
    printf("\n****************************************************************\n");

    if (count>(3*3)/2)
    {
        printf("The given matrix is Sparse Matrix\n");
    }
    else
		printf ("The given matrix is not a sparse matrix.\n");
    printf ("There are %d number of zeros in the matrix.\n\n",count);
    return 0;
}