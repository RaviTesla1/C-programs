main()
{
    int n,count=0;
    printf("Enter number");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
    }
    printf("output is %d",count);
    getch();
}
