main()
{
    int i=1,n,Sum=0;
    printf("Enter number");
    scanf("%d",&n);
    while(i<=n)
    {
        Sum=Sum+i;
        ++i;
    }
    printf("Sum is %d",Sum);
    getch();
}
