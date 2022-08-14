// 11.Write a program to input a number from the user and also input a digit. 
//    Append a digit in the number and print the resulting number.
#include<stdio.h>
int main()
{
   int x,y,a,b,c;
   printf("Enter a Number: ");
   scanf("%d",&x);
   printf("Enter a Single Digit: ");
   scanf("%d",&y);
   a = x/10;
   b = x%10;
   c = y;
   printf("Append a digit and get a result : %d%d%d",a,b,c);
   return 0;
}