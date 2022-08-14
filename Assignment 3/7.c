// 7. Write a program to check whether roots of a given quadratic equation are real &
//    distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a Number: a,b,c = ");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b-4*a*c;
    if(d>0)
        printf("Roots are real & distinct",d);
    else if(d<0)
        printf("Roots are imaginary",d);
    else
        printf("Roots are real & equal",d);
    return 0;
}