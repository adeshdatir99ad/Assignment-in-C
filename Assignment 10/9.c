// 9. Write a function to check whether a given number contains a given digit or not.
//    (TSRS)
#include<stdio.h>
int digit(int n,int digit)
{
    int rem;
    while (n)
    {
        rem = n % 10 ;
        if (rem == digit)
            return 1;
        n = n/10;
    }
    return 0; 
}
int main()
{
    int a,b;
    printf("Given number contains a given digit or not = ");
    scanf("%d%d",&a,&b);
    printf("%d",digit(a,b));
    return 0;
}