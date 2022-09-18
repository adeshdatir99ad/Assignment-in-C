// 8. Write a program to find the second smallest number in an array.Take array values
//    from the user
#include<stdio.h>
int main()
{
    int i,j,temp,a[10];
    printf("Enter array in element: ");
    for (i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for (i=0;i<=8;i++)
    {
        for (j=i+1;j<=9;j++)
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        
    }

    printf("Second smallest number: %d",a[1]);
    
    return 0;
}