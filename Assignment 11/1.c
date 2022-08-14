// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm (int a, int b)
{
    int i;
    for (i=1;i<=a*b;i++)
    {
        if ((i%a==0) && (i%b==0))
        {
            break;
        }
        
    }
    return ("%d",i);
    
}
int main()
{
    int a,b;
    printf("Enter a Two Number = ");
    scanf("%d%d",&a,&b);
    printf("Lcm is = %d",lcm(a,b));
    return 0;
}