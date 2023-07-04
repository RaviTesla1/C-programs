int sum(int n)
{
    if(n==1)
        return 1;
    else
      return n+sum(n-1);
}
main()
{
    int result;
    result=sum(4);
    printf("Output is %d",result);
    getch();
}
