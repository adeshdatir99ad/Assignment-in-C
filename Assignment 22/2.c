// 2. Write a program to ask the user to input a number of data values he would like to
//    enter then create an array dynamically to accommodate the data values. Now take
//    the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i = 0,size = 0,sum = 0;

    printf("Enter size of array: ");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    
    printf("\nThe entered %d values \n",size);
    for (i=0;i<size;i++)
    {
        scanf("%d",ptr+1);
    }
    for (i=0;i<size;i++)
    {
        sum = sum + *(ptr+1);
    }
    
    printf("Average is %d \n",sum/size);
    free(ptr);
    return 0;
}