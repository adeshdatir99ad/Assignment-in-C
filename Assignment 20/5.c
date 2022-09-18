// 5. Write a program to find the maximum number between two numbers using a pointer
#include <stdio.h>
int main()
{
    int n1, n2;
    int *p, *q;
    printf("Enter a Two number: ");
    scanf("%d%d", &n1, &n2);
    p = &n1;
    q = &n2;
    if (*p > *q)
    {
        printf("Maximum number is %d", *p);
    }
    else
    {
        printf("Maximum number is %d", *q);
    }
}