//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter Two Value = ");
    scanf("%d%d",&a,&b);

    for (i=1;i<=a*b;i++)
    {
        if ((i%a==0) && (i%b==0))
        {
            break;
        }
        
    }
    printf("LCM = %d",i);
    
    return 0;
}