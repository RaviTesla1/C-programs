main()
{
    int i,j,n,d=0;
    printf("Enter number of prime numbers:");
    scanf("%d",&n);
    for(i=2;i<1000;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j == 0)
            break;
        }
        if(i==j)
        {
            printf("%d ",i);
            d++;
        }

        if(d==n)
            break;
    }
    getch();
}

