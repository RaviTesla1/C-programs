main()
{
    int i=1,n;
    printf("Enter number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*n+2-2*i);
        ++i;
    }
    getch();
}
