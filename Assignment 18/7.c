// 7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,c = 0;
    printf("Enter a string: ");
    gets(a);
    n = strlen(a);
    for (i=0;i<n/2;i++)
    {
        if (a[i] == a[n-i-1])
        {
            c++;
        }        
    }
    if (c == i)
    {
        printf("String is Palindrome");     // start se read kero ya last se read kero same hoga 
    }
    else
    {
        printf("String is Not Palindrome");
    }
    return 0;
}