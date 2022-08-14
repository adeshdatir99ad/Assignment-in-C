// 3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d \n",n);
        n--;
    } 
    return 0;
}