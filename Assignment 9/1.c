// 1. Write a program which takes the month number as an input and display
//    number of days in that month.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter a Month Number (1-12) : ");
    scanf("%d",&month);
    switch (month)
    {
    case 1 :
        printf("Number of days in this month = 31");
        break;

    case 2 :
        printf("Number of days in this month = 28/29");
        break;

    case 3 :
        printf("Number of days in this month = 31");
        break;

    case 4 :
        printf("Number of days in this month = 30");
        break;

    case 5 :
        printf("Number of days in this month = 31");
        break;

    case 6 :
        printf("Number of days in this month = 30");
        break;

    case 7 :
        printf("Number of days in this month = 31");
        break;

    case 8 :
        printf("Number of days in this month = 31");
        break;

    case 9 :
        printf("Number of days in this month = 30");
        break;

    case 10 :
        printf("Number of days in this month = 31");
        break;

    case 11 :
        printf("Number of days in this month = 30");
        break;

    case 12 :
        printf("Number of days in this month = 31");
        break;

    default:
        printf("Invalid Choice");
        break;
    }
    
    return 0;
}