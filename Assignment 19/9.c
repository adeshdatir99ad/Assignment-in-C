// 9. Write a program that asks the user to enter a username. If the username entered is
//    one of the names in the list then the user is allowed to calculate the factorial of a
//    number. Otherwise, an error message is displayed
#include<stdio.h>
int main()
{
  int i,f=1,num;

  printf("Input the number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      f=f*i;

  printf("The Factorial of %d is: %d\n",num,f);
  return 0;
}
