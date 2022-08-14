// 5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void fun(int);
int main()
{
     int n, count=1, flag, i=2, j;
	 printf("Enter how many prime numbers =  \n");
	 scanf("%d", &n);
	
	 /* Generating prime numbers */
	 while(count <= n)
	 {
		  flag = 0;
		  for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
			    flag=1;
			    break;
			   }
		  }
		  if(flag==0)
		  {
			   printf("%d\t",i);
			   count++;
		  }
		  i++;
	 }
    
    return 0;
    
}
void fun(int a)
{
    int i;
    printf("Prime Number are  = ",i);
}
