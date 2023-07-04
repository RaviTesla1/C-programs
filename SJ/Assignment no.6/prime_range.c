main()
{
    int a,b,i,x;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(x=a+1;x<=b-1;x++)
    {
        for(i=2;i<=x-1;i++)
        {
            if(x%i==0)
                break;
        }
        if(x>1&&i==x)
            printf("%d\n",x);
    }
    getch();
}
