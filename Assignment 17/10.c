// 10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int freq[150] = {0},i = 0;
    printf("Enter any string: ");
    gets(a);
    
    while (a[i] != '\0')
    {
        freq[a[i++]]++;
    }
    
    for(i=0; i<150; i++)
    {
            if(freq[i] != 0)
            {
                printf("%c ==> %d\n",i,freq[i]);
            }
    }
    return 0;
}