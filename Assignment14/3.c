// 3. Write a program to calculate the sum of all even numbers and sum of all odd
//    numbers, which are stored in an array of size 10. Take array values from the user
#include<stdio.h>
int main()
{
    int i,oddsum=0,evensum=0;
    int a[10];
    printf("Enter a array in elements: ");
    
    for (i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        if(a[i]%2==0)
            evensum = evensum + a[i];
        else    
            oddsum = oddsum +a[i];
    
    printf("sum of even nu: %d \n", evensum);

    printf("sum of odd nu: %d",oddsum);    
    return 0;
}