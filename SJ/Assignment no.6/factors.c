main()
{
    int num,i;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            printf("%d\n",i);
    }
    getch();
}
