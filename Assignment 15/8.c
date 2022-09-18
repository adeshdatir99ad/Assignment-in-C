// 8. Write a function in C to print all unique elements in an array.
#include<stdio.h> 
int main() 
{
    int a[100],size, i, j;
    printf("Enter number of elements in array: ");
    scanf("%d", &size);
    printf("Enter %d numbers\n", size);
  
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
  
    printf("Unique Elements\n");
    for(i = 0; i < size; i++) 
    {
        for (j=0; j<i; j++)
        {
            if (a[i] == a[j])
                break;
        }
      
    if (i == j)
    {
      /* No duplicate element found between index 0 to i */
    printf("%d ", a[i]);
    }
    }
return 0;
}