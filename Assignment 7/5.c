//5. Write a program to check whether two given numbers are co-prime
//   numbers or not
#include<stdio.h>
int main()
{
    int a,b,i,hcf=1;
    printf("Enter a Two Number = ");
    scanf("%d%d",&a,&b);

    int min = a<b ? a:b;

    for (i=1;i<=min;i++)
    {
        if ((a%i==0) && (b%i==0))
        {
            hcf = i;
        }
    }
        // hcf is 1 so number is co-prime 
    if (hcf == 1)
    printf("Number is Co-Prime");
    else
    printf("Not a Co-Prime");

    return 0;
    
}