main()
{
    int a,b,i;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
            break;
    }
    for(i=2;i<=b-1;i++)
    {
        if(b%i==0)
            break;
    }
    if(i==a&&i==b)
        printf("%d and %d are co-prime",a,b);
    getch();
}
