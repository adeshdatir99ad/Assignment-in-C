// 5. Suppose we have a list of email addresses, check whether all email addresses have
//    ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[3][20];
    int i;
    printf("Enter a Email: ");
    for (i=0;i<=2;i++)
    {
        gets(a[i]);
    }
    printf("\n\nlist of email addresses have (@): ");
    for (i=0;i<=2;i++)
    {
        if(strchr( a[i],'@') != 0)
        {
            printf("%s\n",a[i]);
        }
      
    }
    return 0;
}
