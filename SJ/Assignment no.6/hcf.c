main()
{
    int a,b,low,i;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    low=a<b?a:b;
    for(i=low;i>=1;i--)
        if(a%i==0 && b%i ==0)
        break;
    printf("HCF is %d",i);
    getch();
}
