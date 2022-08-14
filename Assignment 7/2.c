// 2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int prev=0,cur=1,next=0,n,i;
    printf("Enter a Number = ");
    scanf("%d",&n);
    
    printf("1 ");
    for (i=0;i<n;i++)
    {
        next=prev+cur;              //previous + current = next ;
        printf("%d ",next);
        prev=cur;
        cur=next;
    }

    return 0;
    
}