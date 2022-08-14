//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<math.h>
int main()
{
    int n,d1,d2,d3,i,sum=0;
    printf("All Armstrong Number Under 1000 = ");

    for (i=1;i<=1000;i++)
    {
        n = i;
        if (n<=9)
            printf("%d ",n);
        else
        {
            sum = pow(n%10,3) + pow((n%100 - n%10) / 10,3) + pow((n%1000 - n%100) / 100,3);
            if (sum==i)
            {
                printf("%d ",i);
            }   
        }        
    }
    return 0;
}