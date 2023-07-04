main()
{
    int a,b,c;
    printf("Enter three no.s");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        printf(a>c?"%d is greater",a:"%d is greater",b);
    else
      printf(b>c?"b is greater":"c is greater");
getch();
}


