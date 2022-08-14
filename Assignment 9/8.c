// 8. Program to convert a positive number into a negative number and negative
//    number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number = ");
    scanf("%d",&x);

    switch (x>0)
    {
    case 1 :
        printf("Negative Number %d ",-x);
        break;
    case 0 :
        switch (x<0)
        {
        case 1 :
            printf("Positive Number %d ",-x);
            break;    
        }
    }
    return 0;
}