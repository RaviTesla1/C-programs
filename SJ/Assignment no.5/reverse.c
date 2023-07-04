main()
{
    int num,rev=0,x;
  printf("Enter number");
  scanf("%d",&num);
  while(num!=0)//x
  {
    x=num%10;//r
    rev=rev*10+x;//rev=x*10+rev;//y
    num=num/10;//x
  }
printf("%d is reverse",rev);
getch();
}
