// 6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],t;
    printf("Enter a Name: ");
    gets(a);
    int i = 0,j = strlen(a)-1;
    while (i <= j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
    
    printf("Reverse String = %s",a);
    return 0;
}