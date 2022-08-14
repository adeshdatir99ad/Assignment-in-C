//17. Write a program which takes the length of the sides of a triangle as an input.
//    Display whether the triangle is valid or not
#include <stdio.h>
int main()
{
  int n1, n2, n3;
  printf("Enter three different numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
 
  if ((n1+n2>n3) && (n2+n3>n1) && (n3+n1>n2))
    printf("It is Valid Triangle.");
  else
    printf("It is Not a Valid Triangle");
  return 0;
}