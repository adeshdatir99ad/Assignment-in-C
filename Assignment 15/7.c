// 7. Write a function in C to count a total number of duplicate elements in an array
#include <stdio.h>    
int main()    
{     
    int a[] = {1, 2, 3, 4, 5, 1, 2, 3};     
    int i,j,count=0;
    for(i = 0; i < 7; i++) 
    {    
        for(j = i + 1; j <= 7; j++)
        {    
            if(a[i] == a[j])    
                count++;    
        }    
    }    
    printf("Duplicate elements in array: %d",count);   // repeted digits
    return 0;    
}  