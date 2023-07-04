int combination(int ,int );
main()
{
  int n,r,combine;
  printf("Enter value of n:");
  scanf("%d",&n);
  printf("Enter value of r:");
  scanf("%d",&r);
  combine=combination(n,r);
  printf("Combinations are %d",combine);
  getch();
}
int combination(int n,int r)
{
    int i,n_fact=1,Sub,Sub_fact=1,R_fact=1,Result,multiplication;
    for(i=1;i<=n;i++)
        n_fact=n_fact*i;
    Sub=n-r;
    for(i=1;i<=Sub;i++)
        Sub_fact=Sub_fact*i;
    for(i=1;i<=r;i++)
        R_fact=R_fact*i;
    multiplication=Sub_fact*R_fact;
    Result=n_fact/multiplication;
    return Result;
}
