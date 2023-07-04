main()
{
    int n,i;
    printf("Enter number");
    scanf("%d",&n);
    for(n=2;n<=n-1;n++)
    {
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
             break;
        }
        if(i>=n)
            printf("%d\n",n);
    }
    getch();
}
