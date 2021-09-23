#include<stdio.h>
main()
{
    char x;
    printf("Enter the variable:");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("This is a vowel");

    }
    else
    {
        printf("This is a cosconent");
    }
}
