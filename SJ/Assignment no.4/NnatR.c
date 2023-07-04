main()
{
  int i=1,n;
    printf("Enter number");
    scanf("%d",&n);
    while(i<=n)                 /*while(n)//while(n>=i)
                                  {
                                    printf("%d\n",n);
                                   --n;
                                  }*/
{
        printf("%d\n",n+1-i);
        i++;
        }
    getch();
}
