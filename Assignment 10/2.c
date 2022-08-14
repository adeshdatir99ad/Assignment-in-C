// 2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simple(float,float,float);
int main()
{
    float x,y,z;
    float s;
    printf("Enter a Principle (P) Value = ");
    scanf("%f",&x);
    printf("Enter a Rate (R) per Year = ");
    scanf("%f",&y);
    printf("Enter a Time (T) in Years = ");
    scanf("%f",&z);
    s = simple(x,y,z);
    printf("Simple Interest is = %.2f",s);
    return 0;
}
float simple(float p, float r,float t)
{
    return ((p*r*t)/100);
}