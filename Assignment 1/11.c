// 11.WAP to take time as an input in below given format and convert the time format and display the result as given below.
#include<stdio.h>
int main()
{
    int hour,min;
    printf("Enter time this HH:MM format : \n");
    scanf("%d:%d",&hour,&min);
    printf("%d Hours and %d Minute",hour,min);
    return 0;
    
}