//16. Write a program to check whether a given character is an alphabet (uppercase), an
//    alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter a Character : ");
  scanf("%c", &ch);
  if (ch >= 'A' && ch <= 'Z')
  {
    printf("Character is Uppercase ");
  }
  else if (ch >= 'a' && ch <= 'z')
  {
    printf("Character is Lowercase ");
  }
  else
  {
    printf("its Special Character  ");
  }     
  return 0;
}