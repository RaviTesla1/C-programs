int sum(int n)
{
    if (n==1)
        return 1;
    return n*n +sum(n-1);
}
main()
{
    printf("output is %d",sum(8));
    getch();
}
