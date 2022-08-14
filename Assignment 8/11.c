/*       A    
        ABA   
       ABCBA  
      ABCDCBA 
     ABCDEDCBA         */
#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=0;i<=4;i++)
    {
        k='A';
        for(j=0;j<4-i;j++)
            printf(" ");
        
        for(j=0;j<=i;j++)
            printf("%c",k++);

        k--;
        for (j=0;j<=i-1;j++)
            printf("%c",--k);
    
        printf("\n");
    }
    return 0;
}