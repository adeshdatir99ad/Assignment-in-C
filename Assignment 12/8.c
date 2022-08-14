// 8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void dtob(int);

void dtob(int n)
{
    if (n>0)
    {
        dtob(n/2);
        printf("%d",n%2);
    }
}
int main()
{
    int a;
    int n = a;
    printf("Enter a Number = ");
    scanf("%d",&n);
    dtob(n);
    return 0;
}