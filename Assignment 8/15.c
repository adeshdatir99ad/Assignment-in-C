/*     *
      **
     * *
    *  *
   *****      */
#include<stdio.h>
int main()
{
    int i,j;
    for (i=0;i<=4;i++)
    {
        for (j=0;j<=4;j++)
        {
            if ((4-i==j) || (i==4) || (j==4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}