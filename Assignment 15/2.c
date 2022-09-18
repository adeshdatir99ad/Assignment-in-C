// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int);
int main()
{
    int s,min;
    printf("Enter array in elements: ");
    s = smallest(min);
    printf("Smallest number is: %d",s);    
    return 0;
}
int smallest(int min)
{
    int i,a[10];
    for (i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for (i=0;i<=9;i++)
    {
        if (min > a[i])
            min = a[i];
    }
        
    return min;
}