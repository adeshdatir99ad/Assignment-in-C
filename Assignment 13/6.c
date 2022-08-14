// 6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int);

int fact(int n)
{
    if(n == 1)
        return 1;
    return n * fact(n-1);
}
int main()
{
    int n;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printf("Calculate factorial of a given number = %d",fact(n));
    return 0;
}