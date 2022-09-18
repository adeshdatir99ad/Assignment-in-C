// 1. Write a program to find the number of vowels in each of the 5 strings stored in two
//    dimensional arrays, taken from the user.
#include<stdio.h>
int main()
{
    char a[5][20];
    int i,j,vowel=0;
    printf("Enter a String: ");
    for (i=0;i<=4;i++)
    {
        gets(a[i]);
    }

    for (i=0;i<=4;i++)
    {
        for (j=0;a[i][j] != '\0';j++)
        {
            if(a[i][j] == 'a' || a[i][j] == 'e' || a[i][j] == 'i' || a[i][j] == '0' || a[i][j] == 'u')
                vowel++;
        }
        printf("%s = %d\n",a[i],vowel);
        vowel = 0;
    }
    return 0;
}