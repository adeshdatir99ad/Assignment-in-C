// 5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if ( num >= 100 && num <= 999)
    {
        printf("Number is Three Digit",num);
    }
    else
    {
        printf("Number is Not Three Digit",num);
    }
    return 0;
    
}