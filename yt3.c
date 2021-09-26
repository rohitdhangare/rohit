#include<stdio.h>
#include<conio.h>
main()
{
    int input,i;
    printf("Enter the number:");
    scanf("%d",&input);

    for(i=1;i<=input;i++)
    {
        if(input%i==0)
        printf("%d,  ",i);
    }

}
