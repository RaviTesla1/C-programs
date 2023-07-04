main()
{
    int n,r=0;
    printf("Enter number");
    scanf("%d",&n);
    while(n)
    {
        r=r+n%10;
        n=n/10;
    }
    printf("output is %d",r);
    getch();
}
