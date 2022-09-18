// 10. Write a function in C to count the frequency of each element of an array
#include <stdio.h>
int main()
{
    int a[100], fr1[100];
    int n, i, j, ctr;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
   
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
    printf("element - %d : ",i);
    scanf("%d",&a[i]);
		fr1[i] = -1;
	}
    for(i=0; i<n; i++)
    {
    ctr = 1;
    for(j=i+1; j<n; j++)
    {
        if(a[i]==a[j])
        {
            ctr++;
            fr1[j] = 0;
        }
    }
    if(fr1[i]!=0)
    {
        fr1[i] = ctr;
    }
}
printf("\nThe frequency of all elements of array : \n");
for(i=0; i<n; i++)
{
    if(fr1[i]!=0)
    {
        printf("%d occurs %d times\n", a[i], fr1[i]);
    }
}
return 0;
}
