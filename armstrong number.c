#include<stdio.h>
main()
{
    int a,b,c,d,e,f;
    printf("Enter three digit number:");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    e=c%10;
    f=b*b*b+d*d*d+e*e*e;

    if(f==a)
    {
        printf("The no is armstrong");

    }
    else
    {
        printf("The no is not armstrong");
    }
}
