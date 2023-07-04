
main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    printf("sum is %d",add(a));
    getch();
}
int add (int x)
{
    int i,sum=0;
    for(i=1;i<=x;i++)
        sum=sum+i;
        return sum;
}
