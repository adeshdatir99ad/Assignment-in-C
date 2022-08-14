// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime (int a)
{
    int n,i,flag=0;
    for (i=2;i<=n/2;i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
        printf("Not a Prime");
    else
        printf("Prime");
    
}
int main()
{
    return prime(2);
}