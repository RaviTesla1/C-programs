
main()
{
    int num,pum,i,count=0,ount=0;
    printf("Enter two number");
    scanf("%d%d",&num,&pum);
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
            count++;
    }
    for(i=2;i<=pum-1;i++)
    {
        if(pum%i==0)
            ount++;
    }

    if(count||ount==0)
        printf("co-prime");
    else
        printf("not co-prime");
    getch();
}
