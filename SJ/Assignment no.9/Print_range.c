main()
{
    int num1,num2;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    print_range(num1,num2);
    getch();
}
void print_range(int a,int b)
{
    int i,num;
    for(num=a+1;num<=b-1;num++)
    {
        for(i=2;i<=num-1;i++)
        {
            if(num%i==0)
                break;
        }
        if(i==num)
            printf("%d ",num);
    }
}
