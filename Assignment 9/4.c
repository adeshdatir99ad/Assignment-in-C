//4. Write a menu driven program with the following options:
//   a. Check whether a given set of three numbers are lengths of an
//      isosceles triangle or not
//   b. Check whether a given set of three numbers are lengths of sides of
//      a right angled triangle or not
//   c. Check whether a given set of three numbers are equilateral triangle
//      or not
//   d. Exit
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c;
    while(1)
    {
    printf("##################################");
    printf("\n1.Isosceles triangle or not.");
    printf("\n2.Right angled triangle or not.");
    printf("\n3.Equilateral triangle or not.");
    printf("\n4.Exit\n");
    printf("\nEnter a Choice = ");
    scanf("%d",&x);

    printf("Enter a Three Number = ");
    scanf("%d%d%d",&a,&b,&c);
    switch (x)
    {
    case 1 :
        if(a==b || b==c || c==a)
            printf("It is Isosceles Triangle\n");
        else
            printf("Not a Isosceles Triangle\n");
        break;
    
    case 2 :
        if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
            printf("It is Right angled triangle\n");
        else
            printf("Not a Right angled triangle\n");
        break;
        
    case 3 :
        if((a==b) && (b==c))
            printf("It is Equilateral triangle\n");
        else
            printf("Not a Equilateral triangle\n");
        break;

    case 4 :
        exit(0);

    }
    }
    return 0;
}