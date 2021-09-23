#include<stdio.h>
main()
{
    int x;
    printf("Enter any digit:");
    scanf("%d",&x);
    if(x%5==0&&x%11==0)
    {
        printf("The number is divisible by 5&11");
    }
    else
    {
        printf("The number is not divisible by 5&11");
    }
}
