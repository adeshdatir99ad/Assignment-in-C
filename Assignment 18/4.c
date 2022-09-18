// 4. Write a function to transform string into uppercase
#include <stdio.h> 

void String_Upper(char []);
 
int main()
{
	char str[100];
 
	printf("\n Please Enter any lower text : ");
	gets(str);
 
	String_Upper(str);
 
	printf("\n Upper Case = %s", str);
 
	return 0;
}
 
void String_Upper(char str[]) 
{
	int i = 0;
 
	while (str[i] != '\0') 
	{
    	if (str[i] >= 'a' && str[i] <= 'z') 
		{
        	str[i] = str[i] - 32;
    	}
      	i++;
	}
}