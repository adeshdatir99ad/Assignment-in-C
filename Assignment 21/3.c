// 3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct employee e;
    printf("Enter a Name of Employee : ");
    gets(e.name);

    printf("Enter a Employee Id : ");
    scanf("%d",&e.id);

    printf("Enter a Employee salary : ");
    scanf("%d",&e.salary);

    printf("\n Name = %s  Id = %d  Salary = %d",e.name,e.id,e.salary);
    return 0;
}