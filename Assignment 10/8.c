// 8. Write a function to calculate the number of arrangements one can make from n items
//    and r selected at a time. (TSRS)
#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int perm (int n,int r)
{
    return fact(n)/fact(n-r);
}
int main()
{
    int a,b;
    printf("Enter a Two Number = ");
    scanf("%d%d",&a,&b);
    printf("%d",perm(a,b));
    return 0;
}