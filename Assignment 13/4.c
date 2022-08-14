// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumsquare(int);

int sumsquare(int n)
{
    if(n==1)
        return 1;
    return n*n + sumsquare(n-1);
}
int main()
{
    int n;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printf("Calculate sum of square of first N natural nu = %d",sumsquare(n));
    return 0;
}