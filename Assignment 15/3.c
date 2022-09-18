// 3. Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
int main()
{
     int i,j,temp,a[5];
    // enter array
    printf("Enter array in elements: ");
    for (i=0;i<=4;i++)
        scanf("%d",&a[i]);
              // sort element in array
    for (i=0;i<=3;i++)            // n-1 = 9-1 = 8
    {
        for (j=i+1;j<=4;j++)
            if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        
    }
                  // print that array 
    printf("Sort the elemnets: ");
    for (i=0;i<=4;i++)
        printf("%d ",a[i]);    
    return 0;
}
