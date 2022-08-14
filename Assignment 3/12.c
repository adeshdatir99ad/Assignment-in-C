// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter Alphabet : ");
  scanf("%c", &ch);
  if (ch>='A' && ch<='Z')
  {
    printf("Uppercase");
  }
  else if (ch>='a' && ch<='z')
  {
    printf("Lowercase");
  }
  else
  {
    printf("Not a alphabet");
  }
  return 0;
}