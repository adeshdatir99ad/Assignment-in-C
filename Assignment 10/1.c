// 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float);
int main()
{
    int x;
    float s;
    printf("Enter a Radius = ");
    scanf("%d",&x);
    s = area(x);
    printf("Area of Circle is = %.2f",s);
    return 0;
}
float area(float r)
{
    return (3.14*r*r);
}