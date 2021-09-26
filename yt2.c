#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,fact=1;
    int n2,fact1=1;
    printf("Enter the 1st number for factorial:");
    scanf("%d",&n);
    printf("Enter thr 2nd number for factorial:");
    scanf("%d",&n2);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
     printf("The factorial of %d is:%d\n",n,fact);
    for(i=1;i<=n2;i++)
    {
        fact1=fact1*i;
    }

 printf("The factorial of %d is:%d",n2,fact1);

}
