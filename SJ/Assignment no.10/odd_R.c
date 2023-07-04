void oddr(int n)
{
    if(n>0)
        printf("%d ",2*n-1);
    oddr(n-1);
}
main()
{
    oddr(3);
    getch();
}
