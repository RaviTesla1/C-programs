
main()
{
    int num,i,count=0;
    printf("Enter number");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
            count++;
    }
    if(count==0)
        printf("prime");
    else
        printf(" not prime");
    getch();
}
