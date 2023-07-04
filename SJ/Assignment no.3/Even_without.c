main()
{
    int number,i;
    printf("Enter number");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
    if(number&1)
        printf("%d is odd",number);
    else
        printf("%d is even",number);
    }
    getch();
}
