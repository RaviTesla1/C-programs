main()
{
    int i=1,a=-1,b=1,c,term
    ;
    printf("Enter number");
    scanf("%d",&term);
    while(i<=term+3)
    {
        c=a+b;
        a=b;
        b=c;
        i++;

    if(c==term)
        break;
    }
    if(i>term+3)
        printf("not fibo");
    else
        printf("fibo");

    getch();
}
