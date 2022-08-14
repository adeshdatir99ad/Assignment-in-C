// 8.Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a & 1)
    {
        printf("%d is odd.",a);
    }
    else
    {
        printf("%d is even.",a);
    }
    return 0;
    
}