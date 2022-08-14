//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i+=2)
    {
        sum+=i;
        printf("%d\n",i);        
    }
    printf("calculate sum of first N odd natural numbers = %d",sum);
    return 0;
}