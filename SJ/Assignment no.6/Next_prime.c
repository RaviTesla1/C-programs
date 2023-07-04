main()
{
    int num,i,x;
    printf("Enter number");
    scanf("%d",&num);
    for(x=num+1;x<=num+10;x++)
    {
        for(i=2;i<=x-1;i++)
        {
            if(x%i==0)
                break;
        }
        if(i==x)
            printf("%d is prime",x);
    }
    getch();
}
