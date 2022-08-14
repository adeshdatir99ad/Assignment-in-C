//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d\n",i);        
    }
    i = n*(n+1)/2;
    printf("calculate sum of first N natural numbers = %d",i);
    
    return 0;
}