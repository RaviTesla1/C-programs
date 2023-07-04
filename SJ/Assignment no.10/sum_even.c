int sum(int n)
{
    if(n>0)
        return 2*n+sum(n-1);
}
main()
{
    int result;
    result=sum(10);
    printf("Output is %d",result);
    getch();
}
