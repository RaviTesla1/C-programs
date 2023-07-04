main()
{
    int i=1,fact=1,n;
    printf("Enter number");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        ++i;
    }
    printf("output is %d",fact);
    getch();
}
