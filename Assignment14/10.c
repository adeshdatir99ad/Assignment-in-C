// 10. Write a program in C to copy the elements of one array into another array.Take array
//     values from the user.
#include<stdio.h>
int main()
{
    int i,j,temp,a[10],b[10];
    printf("Enter array in elemnets: ");
    for (i=0;i<=9;i++)
        scanf("%d",&a[i]);

    printf("New array: "); 
    for (i=0;i<=9;i++)
    {
        b[i] = a[i];
        printf("%d ",b[i]);
    }
    return 0 ;
}