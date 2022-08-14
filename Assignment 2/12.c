// 12.Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a Amount in INR : ");
    scanf("%f",&a);
    b = a / 76.23;
    printf("%.2f INR = %.3f USD.",a,b);
    return 0;
}