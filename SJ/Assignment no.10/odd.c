main()
{
    odd(3);
    getch();
}
void odd(int n)
{
    if(n>0)
        odd(n-1);
    printf("%d ",2*n-1);
}
