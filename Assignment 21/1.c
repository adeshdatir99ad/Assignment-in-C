// 1. Define a structure Employee with member variables id, name, salary
#include <stdio.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct employee e;
    printf("Enter a Name of Employee : ");
    gets(e.name);

    printf("Enter a Employee Id : ");
    scanf("%d",&e.id);
    
    printf("Enter a Employee salary : ");
    scanf("%f",&e.salary);

    printf("\n Name = %s, Id = %d, Salary = %f",e.name,e.id,e.salary);
    return 0;
}
