// 1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum(int);
int sum(int n)
{
    if (n== 1)
    {
        return(1);
    }
    return n + sum(n-1);
}
int main()
{
    int n = 10;
    printf("Sum of first N natural number %d",sum(10));
}