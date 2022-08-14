// 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void fun(int);
int main()
{
    int x;
    printf("Enter a Number = ");
    scanf("%d",&x);
    fun (x);
    return 0;
}
void fun(int a)
{
    int i;
    for (i=1;i<=a;i++)
    {
       printf("%d",i); 
       printf("\n");
    }
}