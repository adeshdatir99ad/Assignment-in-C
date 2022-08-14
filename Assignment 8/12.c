/*   ABCDCBA
      ABCBA 
       ABA  
        A          */
#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=0;i<=3;i++)
    {
        k='A';
        for (j=0;j<=i+0;j++)
            printf(" ");

        for (j=0;j<=3-i;j++)
            printf("%c",k++);

        --k;
        for (j=0;j<=2-i;j++)
            printf("%c",--k);        
        
        printf("\n");
    }
    return 0;
}