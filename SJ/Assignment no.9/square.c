main()
{
    int a,x;
    printf("Enter number");
    scanf("%d",&a);
    printf("output is %d",square(a));
    getch();
}
int square(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum=sum+i*i;
    return sum;
}
