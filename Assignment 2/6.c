// 6.Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Single Character: ");
    scanf("%c",&a);
    printf("ASCII Code of %c = %d",a,a);
    return 0;
}