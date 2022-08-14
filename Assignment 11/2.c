// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf (int a,int b)
{
    int i,hcf=1;
    int min = a<b ? a:b;
    for (i=1;i<=min;i++)
    {
        if((a%i==0) && (b%i==0))
            hcf = i;
    }
    return("%d",hcf);
}
int main()
{
    int a,b;
    printf("Enter a Two Number = ");
    scanf("%d%d",&a,&b);
    printf("Hcf is = %d",hcf(a,b));
    return 0;
}