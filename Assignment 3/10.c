//10. Write a program which takes the cost price and selling price of a product from the
//    user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
  float cp,sp,pf,ls;
  printf("Enter Cost price : ");
  scanf("%f", &cp);
  printf("Enter Selling price : ");
  scanf("%f",&sp);
  if (sp>cp)
  {
    pf = (sp - cp)/cp*100;
    printf("Profit is = %.2f", pf);
  }
  else if (cp>sp)
  {
    ls = (cp - sp)/cp*100;
    printf("Loss is = %.2f", ls);
  }
  else
  {
      printf("No Profit and NO Loss.");
  } 
  return 0;
}