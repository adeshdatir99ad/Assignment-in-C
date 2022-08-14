//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void printnatural(int);

void printnatural(int a)
{
    if(a == 0)
        return;
    printnatural(a-1);
    printf("%d ",a);
}
int main()
{
    int n;
    printf("Enter a Number = ");
    scanf("%d",&n);
    int a = n;
    printnatural(a);
    return 0;
}