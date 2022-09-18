// 8. Write a function to count words in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch;
    int i,count = 0;
    printf("Please Enter any String : ");
    gets(str);

    printf("Please Enter the Character that you want to Search for : ");
    scanf("%c",&ch);

    for (i=0;i<=strlen(str);i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
        
    }
    printf("The Total Number of times '%c' has Occured = %d ", ch, count);
    return 0;
}