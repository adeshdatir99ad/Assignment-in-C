//2. Write a menu driven program with the following options:
//   a. Addition
//   b. Subtraction
//   c. Multiplication
//   d. Division
//   e. Exit
#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
    int x,a,b;
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit\n");
    printf("\nEnter a Choice = ");
    scanf("%d",&x);

    switch (x)
    {
    case 1 :
        printf("Enter a Two Number = ");
        scanf("%d%d",&a,&b);
        printf("Sum is  %d",a+b);
        break;

    case 2 :
        printf("Enter a Two Number = ");
        scanf("%d%d",&a,&b);
        printf("Sub is  %d",a-b);
        break;

    case 3 :
        printf("Enter a Two Number = ");
        scanf("%d%d",&a,&b);
        printf("Mul is %d",a*b);
        break;
    
    case 4 :
        printf("Enter a Two Number = ");
        scanf("%d%d",&a,&b);
        printf("Div is %d",a/b);
        break;

    case 5 :
        exit(0);
    
    default:
        printf("Invalid Number");
        break;
    }
    }
    return 0;
}