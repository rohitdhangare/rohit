#include<stdio.h>
main()
{
    int a,b,c,d,e,x;
    printf("Enter three digit number:\n");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    e=c%10;
    x=b+d+e;
    printf("all digit addition is :%d",x);
}
