
main()
{
    int i=1,sum=0,n;
    printf("Enter number");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+2*i-1;
        ++i;
    }
    printf("output is %d",sum);
    getch();
}
