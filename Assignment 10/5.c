// 5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void fun(int);
int main()
{
    int n;
    printf("Enter a Number = ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
void fun(int a)
{
    int i;
    printf("The Odd numbers are :");
    for (i=1;i<=a;i++)
    {
        printf(" %d",2*i-1);
    }
}