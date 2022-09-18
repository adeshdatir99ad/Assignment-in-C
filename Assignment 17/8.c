// 8. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    int i = 0;
    printf("Enter a Name : ");
    gets(s1);

    for(i=0;s1[i]!='\0';i++)  
    {
        s2[i] = s1[i];  
    }
    s2[i] = '\0';
    printf("original string s1='%s",s1);
    printf("\nCopy string s2 = %s",s2);
    return 0;
}