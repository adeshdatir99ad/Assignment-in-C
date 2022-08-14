// 10.WAP to take date as an input in below given format and convert the date format and display the result as given below.
#include<stdio.h>
int main()
{
    int day,month,year;
    printf("Enter date in DD/MM/YYYY format : ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day - %d , Month - %d , Year - %d",day,month,year);
    return 0;
}