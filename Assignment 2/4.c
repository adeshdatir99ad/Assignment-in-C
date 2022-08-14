// 4.Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a = 10,b = 20;
    printf("Before swapping value is : a = %d b = %d\n",a,b);
   
    a = a+b;
    b = a-b;
    a = a-b;

    printf("After swapping value is : a = %d b = %d",a,b);    
    return 0;

}