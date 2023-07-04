main()
{
    er(4);
    getch();
}
void er(int n)
{
    if(n>0)
        printf("%d ",2*n);
    er(n-1);
}
