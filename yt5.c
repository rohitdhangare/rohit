#include<stdio.h>
#include<conio.h>
//prime number
main()
{
    int input,i,count=0;
    printf("Enter any number:");
   scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        if(input%i==0)
        count++;

    }if(count==2)
    printf("%d is a prime number",input);
    else printf("%d is not a prime number",input);
}
