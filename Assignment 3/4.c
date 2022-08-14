// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if (num & 1)
    {
        printf("Number is Odd",num);
    }
    else
    {
        printf("Number is Even",num);
    }
    return 0;
    
}