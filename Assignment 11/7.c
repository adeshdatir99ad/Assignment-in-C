// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fib(int n)
{
    int i,prev = 0, cur = 1, next = 0;
    
    printf("1 ");
    for (i=0;i<=n;i++)
    {
        next = prev + cur;
        printf("%d ",next);
        prev = cur;
        cur = next;   
    }
    
}
int main()
{
    int a;
    printf("Enter a Number = ");
    scanf("%d",&a);
    fib(a);
    return 0;
}