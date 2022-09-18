// 6. Write a program to sort elements of an array of size 10. Take array values from the
//    user
#include<stdio.h>
int main()
{
    int i,j,temp,a[10];
    // enter array
    printf("Enter array in elements: ");
    for (i=0;i<=9;i++)
        scanf("%d",&a[i]);
              // sort element in array
    for (i=0;i<=8;i++)            // n-1 = 9-1 = 8
    {
        for (j=i+1;j<=9;j++)
            if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        
    }
                  // print that array 
    printf("Sort the elemnets: ");
    for (i=0;i<=9;i++)
        printf("%d ",a[i]);    
    return 0;
}