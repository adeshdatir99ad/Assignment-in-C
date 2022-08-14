// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fun(int);
int main()
{
    int s,n,i,f=1;
    printf("Enter a Number = ");
    scanf("%d",&n);
    s = fun(n);
    printf("Calculate the Factorial : ");
    for (i=1;i<=n;i++)
    {
        f=f*i;   
    }
    printf("%d",f);
    return 0;
}
int fun (int a)
{
    return (a);
}
