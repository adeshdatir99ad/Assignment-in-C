// 5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void printeven(int);

void printeven(int n)
{
    if(n == 0)
        return;
    printeven(n-1);
    printf("%d ",2*n-2);
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