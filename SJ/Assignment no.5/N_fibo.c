main()
{
    int i=1,a=-1,b=1,c,num,temp;
    printf("Enter number");
    scanf("%d",&num);
    while(i<=num)
    {
        c=a+b;
        printf("%d ",c);
        temp=a;
        a=b;
        b=c;
        i++;
    }
    getch();
}
