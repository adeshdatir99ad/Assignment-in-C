// 8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
void sort(int *ptr,int size)
{
    int i,j,sum=0;
    for ( i = 0; i < size-1; i++)
    {
        sum = sum + ptr[i];
    }
    printf("Sum is %d\n",sum);
}
int main()
{
    int a[] = {2,4,62,1,5,56,8,4,23,6},i;
    sort(a,10);

    for ( i = 0; i < 10; i++)
        printf("%d ",a[i]);
    return 0;
    
}