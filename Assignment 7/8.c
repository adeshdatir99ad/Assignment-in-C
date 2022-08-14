// 8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int n,i,n1,flag=0;
    printf("Ener a Number = ");
    scanf("%d",&n1);

    for (n=n1;1;n++)
    {
        flag = 0;
        for (i=2;i<=n/2;i++)
        {
            if (n % i == 0)
            flag = 1;
        }        
        if (flag == 0)
        {
            printf("Next Prime Number is = %d ",n);
            break;                    // 1 value print hone ki baad stop ke liye 
        }
    }
    return 0;
}