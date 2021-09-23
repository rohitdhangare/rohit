
 #include<stdio.h>
main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);

    if(age>=18&&age<100)
    {
        printf("you can apply for driving liscence");

    }else if(age<18)
    {
        printf("you can't apply for driving liscence");

    }
    else
    {
        printf("you are dead");
    }
}
