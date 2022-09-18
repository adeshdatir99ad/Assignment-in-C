// 5. Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter a Name: ");
    gets(str);
    for (i=0;str[i];i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        
    }
    printf("lowercase = %s",str);
    return 0;
}