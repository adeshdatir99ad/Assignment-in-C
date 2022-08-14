// 8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fib(int);

int fib(int n)
{
    if(n==1 || n==0)
        return n;
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n ,i;
    printf("Enter a Number = ");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
        printf("%d ",fib(i));
    return 0;
}