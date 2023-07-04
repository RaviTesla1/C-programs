main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    if(even_odd(a))
        printf("even");
    else
        printf("odd");
    getch();
}
int even_odd(int n)
{
    int i=2;
    if(n%i)
        return 0;
    return 1;
}
