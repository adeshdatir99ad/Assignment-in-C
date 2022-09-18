// 1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char str[10] = "Adesh";
    int i;
    for (i=0;str[i]; )
    {
        i++;
    }
    printf("Length is: %d",i);
    return 0;
}