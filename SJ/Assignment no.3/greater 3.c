main()
{
    int a,b,c;
    printf("Enter three no.s");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(a>c)
      printf("%d is greater",a);
        else
        ("%d is greater",c);
    else
           if(b>c)
            printf("%d is greater",b);
           else
            printf("%d is greater",c);
getch();
}

