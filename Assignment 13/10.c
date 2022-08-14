// 10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int calpower(int,int);

int calpower(int base,int power)
{
    if (power!=0)
        return(base * calpower(base,power-1));
    else
        return 1;
}
int main()
{
    int base, power;
    
    // Asking for Input
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);
    
    printf("%d raised to %d is %d", base, power, calpower(base, power));
    return 0;
}