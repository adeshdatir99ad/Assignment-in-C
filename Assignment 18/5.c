// 5. Write a function to transform a string into lowercase
#include <stdio.h> 

void String_Upper(char []);
 
int main()
{
	char str[100];
 
	printf("\n Please Enter any Upper text : ");
	gets(str);
 
	String_Upper(str);
 
	printf("Lower Case = %s", str);
 
	return 0;
}
 
void String_Upper(char str[]) 
{
	int i = 0;
 
	while (str[i] != '\0') 
	{
    	if (str[i] >= 'A' && str[i] <= 'Z') 
		{
        	str[i] = str[i] + 32;
    	}
      	i++;
	}
}