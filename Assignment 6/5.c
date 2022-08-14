//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum+=i*i*i;
        printf("%d\n",i*i*i);        
    }
    printf("calculate sum of cube of first N natural numbers = %d",sum);
    return 0;
}