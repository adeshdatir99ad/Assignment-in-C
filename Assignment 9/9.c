// 9. Program to Convert even number into its upper nearest odd number
//    Switch Statement.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter a Number = ");
    scanf("%d",&x);

    switch (x%2==0)
    {
    case 1 :
        printf("Nearest odd number %d",x+1);
        break;
    case 0 :
        switch (x%1==0)
        {
        case 1 :
            printf("Nearest odd number %d",x);
            break;
        }
    }
    return 0;
}