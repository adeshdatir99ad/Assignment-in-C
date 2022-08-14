// 8. Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i,sum;
    for (i=0; i<=10; i++)
    {
        sum = i*i;
        printf("%d = %d \n",i,sum);
    }
    return 0;

}