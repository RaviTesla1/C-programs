void print(int);
main()
{
    print(3);
    getch();
}
void print(int n)
{
    if(n>=1)
        print(n-1);
    printf("%d ",n);
}
