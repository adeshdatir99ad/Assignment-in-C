// 2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for (i=2;i<=n;i+=2)
    {
        sum+=i;
        printf("%d\n",i);        
    }
    printf("calculate sum of first N even natural numbers = %d",sum);
    return 0;
}