// 6. Program to check whether a year is a leap year or not. Using switch
//    statement
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year;
    printf("Enter a Year = ");
    scanf("%d",&year);

    switch (year%100==0)
    {
    case 0 : switch(year%4==0)
             {
                case 1 : printf("Leap Year");
                break;
                case 0 : printf("Non Leap Year");
                break;
             }
             break;

    case 1 : switch(year%400==0)
             {
                case 0 : printf("Leap Year");
                break;
                case 1 : printf("Non Leap Year");
                break;
             }
             break;
    }
    return 0;
}