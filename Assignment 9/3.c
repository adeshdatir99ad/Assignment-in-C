// 3. Write a program which takes the day number of a week and displays a
//    unique greeting message for the day.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number of Week (1-7) = ");
    scanf("%d",&x);
    switch (x)
    {
        case 1 :
            printf("Good Morning Today is Monday.");
            break;

        case 2 :
            printf("Good Morning Today is Tuesday.");
            break;

        case 3 :
            printf("Good Morning Today is Wednesday.");
            break;

        case 4 : 
            printf("Good Morning Today is Thuesday.");
            break;

        case 5 :
            printf("Good Morning Today is Friday.");
            break;;

        case 6 :
            printf("Good Morning Today is Saturday.");
            break;

        case 7 :
            printf("Good Morning Today is Sunday.");
            break;

        default :
            printf("Invalid Number");
            break;
    }
    return 0;
}