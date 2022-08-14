// 3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sumeven(int,int);

int sumeven(int n1,int n2)
{
    if(n1>n2)
        return 0;
    return n1 + sumeven(n1 + 2,n2);
}
int main()
{
    int n1 = 2,n2;
    printf("Enter a Number = ");
    scanf("%d",&n2);
    printf("Calculate sum of first N even natural nu = %d",sumeven(n1,n2));
    return 0;
}