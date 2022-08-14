// 9. Write a program to check whether a given number is an Armstrong number
//    or not
#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("Enter a Number = ");
    scanf("%d",&n);

    for (temp=n;n!=0;n=n/10)
    {
        r = n % 10;
        sum = sum + (r*r*r);
    }
    if (sum==temp)
    printf("Number is Armstrong");
    else
    printf("Not a Armstrong Number");

    return 0;
    
    
}