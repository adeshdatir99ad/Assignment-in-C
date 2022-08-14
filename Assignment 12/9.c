// 9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void dtoo(int);

void dtoo(int n)
{
    if (n>0)
    {
        dtoo(n/8);
        printf("%d",n%8);
    }
    
}
int main()
{
    int a;
    int n = a;
    printf("Enter a Number = ");
    scanf("%d",&n);
    dtoo(n);
    return 0;
}