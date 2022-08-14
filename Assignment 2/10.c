//10.Write a program to make the last digit of a number stored in a variable as zero. 
#include<stdio.h>
int main()
{
    int a;
    printf("Enetr a Number : ");
    scanf("%d",&a);
    printf("Last number stored in a variable as zero : %d",a/10*10);
    return 0;
}