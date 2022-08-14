// 9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int n)
{
    int a;
    a = n*n;
    return a;
}
int main()
{
    int a;
    printf("Enter a Two Number = ");
    scanf("%d",&a);
    printf("%d",square(a));
    return 0;
}