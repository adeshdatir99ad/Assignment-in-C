// 4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20][50],s1[50];
    int i,found=0,n;

    printf("Enter how many string (names): ");
    scanf("%d",&n);

    printf("Enter a String to Search: ");
    for (i=0;i<=n;i++)
    {
        gets(str[i]);
    }

    printf("Enter a string to search: ");
    gets(s1);

    for (i=0;i<=n;i++)
    {
        if(strcmp( s1,str[i] ) == 0)
        {
            found=1;
            printf("String Found row - %d\n",i+1);
            break;
        }       
    }    
    if(found==0) printf("String Not found"); 
    return 0;
}