// 5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while (i<=n)
    {
        if(n&1)
        {
            printf("%d \n",n);
            n = n-1;
            n--;
        }
        else
        {
            n = n-1;
            printf("%d \n",n);
            n--;
        }

    } 
    return 0;
}