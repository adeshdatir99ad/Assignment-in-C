//13. Write a program to check whether a given number is
//    divisible by 3 and divisible by 2.
#include <stdio.h>
int main()
{
  int a;
  printf("Enter a Number : ");
  scanf("%d", &a);
  if (a % 3 == 0 && a%2 == 0)
  {
    printf("Number is Divisible By 3 and 2 ");
  }
  else
  {
    printf("Number is  Not Divisible by 3 and 2  ");
  }     
  return 0;
}