// 6. Write a function to check whether a given string is an alphanumeric string or not.
//    (Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,alphabets=0,digits=0,specialcharacters=0;
    printf("Please Enter any String : ");
    gets(str);

    for (i=0;str[i];i++)
    {
        // alphabets
        if (str[i] >= 65 && str[i] <= 90  || str[i] >= 97 && str[i] <= 122 )
        {
            alphabets++;
        }
        //Digts
        else if (str[i] >= 48 && str[i] <= 57)
        {
            digits++;
        }
        //Special ch
        else
            specialcharacters++;
    }
    printf("The Total Number of alphabets = %d", alphabets);
    printf("\nThe Total Number of digits = %d", digits);
    printf("\nThe Total Number of special characters = %d", specialcharacters);
    return 0;
}
