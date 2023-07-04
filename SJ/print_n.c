main()
{
    int n,j,i;
    printf("enter no. of prime numbers");
    scanf("%d",&n);
    for(j=2;j<=n;j++)
    {
        for(i=2;i<=j-1;i++)
        {
         if(j%i == 0)
          break;
        }
    }
    if(i == j)
        printf("%d ",j);
    getch();
}
