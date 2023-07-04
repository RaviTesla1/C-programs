main()
{
    int i=1,a=-1,b=1,c,term,temp;
    printf("Enter term: ");
    scanf("%d",&term);
    while(i<=term)
    {
        c=a+b;
        temp=a;
        a=b;
        b=c;
        i++;
    }
    printf("%d",c);
    getch();
}
