// 5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a three digit Number: ");
    scanf("%d",&a);
    printf("%d",a/100+a/10%10+a%10);
    return 0;
}