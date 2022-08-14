// 2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void printnatural (int);

void printnatural (int n)
{
    if(n==0)
        return;
    printf("%d ",n);
    printnatural(n-1);
   
}
int main()
{
    int a;
    int n = a;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printnatural(n);
    return 0;
}