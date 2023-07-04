main()
{
    int num,x,sum=0;
    printf("Enter number");
    scanf("%d",&num);
    while(num!=0)
    {
        x=num%10;
        sum=sum+x;
        num=num/10;
    }
printf("sum of digits is %d",sum);
getch();
}
