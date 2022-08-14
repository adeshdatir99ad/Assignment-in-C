// 8. Write a program to check whether a given number is a Prime number or
//    not
#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter a Value Of n = ");
    scanf("%d",&n);

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

    return 0;
    
}