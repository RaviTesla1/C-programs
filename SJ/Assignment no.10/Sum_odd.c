int sum(int n)
{
    if(n==1)
        return 1;
    return 2*n-1+sum(n-1);
}
main()
{
    printf("output is %d",sum(10));
    getch();
}
