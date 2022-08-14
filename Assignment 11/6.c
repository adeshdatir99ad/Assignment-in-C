//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime(int,int);
int main()
{
    int n,i,n1,n2,flag=0;
    printf("Enter a Two Number = ");
    scanf("%d%d",&n1,&n2);
    prime(n1,n2);
    for (n=n1;n<=n2;n++)   // Prime numbers between two given numbers
    {
        flag = 0;
        for (i=2;i<=n/2;i++)
        {
            if (n % i == 0)
            flag = 1;
        }        
    if (flag == 0)
    printf("%d ",n);
    }
    return 0;
    
}
void prime (int a,int b)
{
    int n;
    printf("Prime Number Between Two given Number = ",n);
}
