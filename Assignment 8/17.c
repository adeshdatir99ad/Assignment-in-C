/*    *********
       *     *
        *   *
         * *
          *               */
#include<stdio.h>
int main()
{
    int i,j;
    for (i=0;i<5;i++)
    {
        for (j=0;j<9;j++)
        {
            if ((i==j) || (j==8-i) || (i==0) && (j<9))
                printf("*");
            else
                printf(" ");            
        }
        printf("\n");
    }
    return 0;
}