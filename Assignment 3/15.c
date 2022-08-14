//15. Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a Number : ");
  scanf("%d", &a);
  if (a > 0.0)
  {
    printf("Number is Positive ");
  }
  else if (a < 0.0)
  {
    printf("Number is  Negative ");
  }
  else
  {
    printf("Number is Zero  ");
  }     
  return 0;
}