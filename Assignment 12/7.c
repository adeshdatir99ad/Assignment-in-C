// 7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void printsq(int);

void printsq(int n)
{
    if(n == 0)
        return;
    printsq(n-1);
    printf("%d ",n*n);
}
int main()
{
    int a;
    int n = a;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printsq(n);
    return 0;
}