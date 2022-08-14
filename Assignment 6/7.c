//7. Write a program to count digits in a given number
#include <stdio.h>
int main()
{
  int N, R, Count=0;
  printf("\n Please Enter any number =  ");
  scanf("%d", &N);

  while(N > 0)
  {
     N = N / 10;
     Count = Count + 1;  
  }

  printf("\n Number of Digits in a Given Number = %d", Count);
  return 0;
}