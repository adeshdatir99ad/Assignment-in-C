// 3. Write a function to check whether a given number is even or odd. Return 1 if the
//    number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int fun(int);
int main()
{
    int x,s;
    printf("Enter a Number = ");
    scanf("%d",&x);
    s = fun(x);
    printf("%d",s);
    return 0;
}
int fun(int n)
{
    if (n % 2 == 0)
        return (1);
    else
        return (0);
}