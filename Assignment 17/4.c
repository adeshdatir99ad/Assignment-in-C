// 4. Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter a Name: ");
    gets(str);
    for (i=0;str[i]; )
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Uppercase = %s",str);
    return 0;
}