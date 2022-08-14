// 9.Write a program to print size of an int, a float, a char and a double type variable
# include<stdio.h>
int main()
{
    char a;
    int b;
    float c;
    double d;
    printf("Size of char is : %d\n",sizeof(a));
    printf("Size of int is : %d\n",sizeof(b));
    printf("Size of float is : %d\n",sizeof(c));
    printf("Size of double is : %d\n",sizeof(d));
    return 0;
}