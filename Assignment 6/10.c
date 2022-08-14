//10. Write a program to reverse a given number
#include <stdio.h>
int main()
{
  int n,i,reaminder,reverse=0;
  printf("Enter a Number = ");
  scanf("%d",&n);

  while (n!=0)
  {
    reaminder = n%10;
    n = n/10;
    reverse = reverse * 10 + reaminder;
  }
  printf("reverse is = %d",reverse);
  
  return 0;
}