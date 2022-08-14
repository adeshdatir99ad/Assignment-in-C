// 9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int countdigit(int);

int countdigit (int n)
{
    static int count = 0;
    if(n>0)
    {
        count++;
        countdigit(n/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int count = 0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
     
    count=countdigit(n);
    printf("Total digits in number %d is: %d\n",n,count);
    return 0;
}