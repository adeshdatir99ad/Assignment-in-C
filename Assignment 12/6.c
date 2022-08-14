// 6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void printeven(int);

void printeven(int n)
{
    if(n == 0)
        return;
    printf("%d ",2*n-2);
    printeven(n-1);
}
int main()
{
    int a;
    int n = a;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printeven(n);
    return 0;
}