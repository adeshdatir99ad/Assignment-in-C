//1. Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
int main()
{
    int prev=0,cur=1,next=0,n,i;
    printf("Enter a Value = ");
    scanf("%d",&n);

    for (i=1;i<n;i++)
    {
        next = prev + cur;
        prev = cur;
        cur = next;
    }
    printf("%d ",cur);  // show nth term in fibonnaci series

    return 0;
    
}