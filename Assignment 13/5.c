// 5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumdigit(int);

int sumdigit(int n)
{
    if(n == 0)
        return 0;
    return n%10 + sumdigit(n/10);
}
int main()
{
    int n;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printf("Calculate sum of digits of given nu = %d",sumdigit(n));
    return 0;
}