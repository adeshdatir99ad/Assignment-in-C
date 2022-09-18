// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
//     Physics (each out of 100) using a structure named Marks having elements roll no.,
//     name, chem_marks, maths_marks and phy_marks and then display the percentage
//     of each student.
#include <stdio.h>
struct marks
{
    int roll_no;
    char name[20];
    float chem_marks, maths_marks, phy_marks;
};
int main()
{
    struct marks m[5];
    for (int i = 0; i <= 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Enter roll no : ");
        scanf("%d", &m[i].roll_no);
        printf("Enter name : ");
        fflush(stdin);
        gets(m[i].name);
        printf("Enter Chemistry marks : ");
        scanf("%f", &m[i].chem_marks);
        printf("Enter Maths marks : ");
        scanf("%f", &m[i].maths_marks);
        printf("Enter Physics marks : ");
        scanf("%f", &m[i].phy_marks);
    }

    for (int i = 0; i <= 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        float percentage = (m[i].chem_marks + m[i].maths_marks + m[i].phy_marks);
        printf("Percentage : %f\n", percentage);
    }

    return 0;
}