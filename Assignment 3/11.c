//11. Write a program to take marks of 5 subjects from the user. Assume marks are given
//    out of 100 and passing marks is 33. Now display whether the candidate passed the
//    examination or failed.
#include <stdio.h>
int main()
{
  float sub1,sub2,sub3,sub4,sub5;
  printf("Maths : ");
  scanf("%f", &sub1);
  printf("Physics : ");
  scanf("%f",&sub2);
  printf("Chemistry : ");
  scanf("%f", &sub3);
  printf("Biology : ");
  scanf("%f",&sub4);
  printf("English : ");
  scanf("%f",&sub5);
  if (sub1>=33 && sub2>=33 && sub3>=33 && sub4>=33 && sub5>=33)
  {
    printf("Student Pass All Subject  ");
  }
  else
  {
      printf("Student Faield ");
  }       
  return 0;
}