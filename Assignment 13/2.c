// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumodd(int,int);

int sumodd(int n1,int n2)
{
    if (n1>n2)
        return 0;
    return n1 + sumodd(n1 + 2,n2);
}
int main()
{
    int n1=1,n2;
    printf("Enter a Number = ");
    scanf("%d",&n2);
    printf("Calculate sum of first N odd natural nu = %d",sumodd(n1,n2));
    return 0;
}