#include<stdio.h>
main()
{
    char ch;
    int x;
    printf("Enter any character:");
    scanf("%c",&ch);
    x =ch;

        if(x>=65&&x<=90)
        {
            printf("capital");

        }
        else if (x>=97&&x<=122)
        {
            printf("small");
        }
        else if(x>=48&&x<=57)
        {
            printf("digit");

        }
        else
        {
            printf("I don't know this character");
        }

}
