//10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag = 0;
    char a[3][2][20] = { { "adesh" , "123" }, { "MySirG","456"},{"Sarthak","321"}  };
    char username[] = "adesh";
    char password[] = "123";

    for (i=0;i<3;i++)
    {
        if (strcmp (username,a[i][0] ) == 0 && strcmp ( password,a[i][1] ) == 0 )
        {
            printf("Login in Successful !!");
            flag = 1;
        }
    }
    if (flag == 0)
        printf("Username and Password not matched");
    
    return 0;
}