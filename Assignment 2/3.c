// 3. Write a program to swap values of two int variables
#include<stdio.h>
int main() 
{
  int a=10,b=20,temp;
  printf("Before swapping a = %d, b = %d \n",a,b);
  
  temp=a;
  a=b;
  b=temp;

  printf("After swapping a = %d, b = %d ",a,b);
  return 0;
}
