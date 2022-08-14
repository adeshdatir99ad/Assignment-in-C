// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void printodd(int);

void printodd(int n)
{
    if(n == 0)
        return;
    printf("%d ",2*n-1);
    printodd(n-1);
}
int main()
{
    int a;
    int n = a;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printodd(n);
    return 0;
}