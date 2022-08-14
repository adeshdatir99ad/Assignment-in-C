// 8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int pascal (int n,int r)
{
    int i,j;
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
}
int main()
{
    int a,b;
    printf("Enter a Two Number = ");
    scanf("%d%d",&a,&b);
    printf("%d",pascal(a,b));
    return 0;
}