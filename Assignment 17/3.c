// 3. Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,count = 0;
    printf("Enter a Name : ");
    gets(str);

    for (i=0;i<=strlen(str);i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        
    }
    printf("The Total Numbers Vowels = %d",count);
    return 0;
}