// 7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int,int);

int hcf(int a, int b)
{
    while(a!=b)
    {
    if(a>b)
        return a-b,b;
    else
        return a,b-a;
    }
    return a;
}
int main()
{
    int a,b,result;
    printf("Enter a Number = ");
    scanf("%d%d",&a,&b);
    result = hcf(a,b);
    printf("Calculate HCF of two numbers = %d",result);
    return 0;
}