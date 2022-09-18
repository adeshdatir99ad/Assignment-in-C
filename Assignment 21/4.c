// 4. Write a function to find the highest salary employee from a given array of 10
//    employees. [ Refer structure from question 1]
#include <stdio.h>
struct employee
{
    int id;
    char name[30];
    int salary;
};
int main()
{
    struct employee e[10];
    int i, high;
    for (i = 0; i <= 9; i++)
    {
        printf("Enter a Name of Employee : ");
        fflush(stdin);
        gets(e[i].name);

        printf("Enter a Employee Id : ");
        scanf("%d", &e[i].id);

        printf("Enter a Employee salary : ");
        scanf("%d", &e[i].salary);
    }
// Highest salary
    high = e[0].salary;
    for (i = 0; i <= 9; i++)
    {
        if (e[i].salary > high)
            high = e[i].salary;
    }
    printf("\nHighest salary employee details:");
    for (i = 0; i <= 9; i++)
    {
        if (e[i].salary == high)
            printf("\n %d\t%s\t%d", e[i].id, e[i].name, e[i].salary);
    }
    return 0;
}
