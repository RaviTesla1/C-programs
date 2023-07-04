main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    rever(n);
    getch();

}
 int rever(int n)
 {
     if(n==0)
        return;
     printf("%d ",n);
     rever(n-1);
 }
