// 2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if ( num % 5 == 0 )
    {
        printf("Number is divisible by 5",num);
    }
    else
    {
        printf("Number is not divisibe by 5",num);
    }
    return 0;
}