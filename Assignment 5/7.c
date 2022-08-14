// 7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    while (n)
    {
        printf("%d\n",n*2);
        n--;
    }
    
    return 0;
}