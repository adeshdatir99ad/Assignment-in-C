// 10. Write a recursive function to print reverse of a given number
#include<stdio.h>
void printreverse(int);

void printreverse(int n)
{
    while(n>0)
   {
    int rem,rev=0;
    rem = n%10;
    rev = rev*10 + rem;
    n = n/10;
    printf("%d",rev);
   }
    
}
int main()
{
    int a;
    int n = a;
    printf("Enter a Number = ");
    scanf("%d",&n);
    printreverse(n);
    return 0;
}