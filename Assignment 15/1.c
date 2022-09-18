// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int);
int main()
{
    int s,max=-1;
    printf("Enter array in elements: ");
    s = greatest(max);
    printf("Gratest number is: %d",s);
    return 0;
}
int greatest(int max)
{
    int i,a[10];
    for (i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for (i=0;i<=9;i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;    
}