main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("b is %d and a is %d",b,a);
    getch();
}
