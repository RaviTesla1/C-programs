main()
{
    int a,b,L;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0&&L%b==0)
        break;
    printf("lcm is %d",L);
    getch();
}
