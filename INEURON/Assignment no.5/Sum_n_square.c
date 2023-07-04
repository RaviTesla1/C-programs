main()
{
    int i=1,sum=0,num;
    printf("Enter number");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+i*i;
        ++i;
    }
    printf("output is %d",sum);
    getch();
}
