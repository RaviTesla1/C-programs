main()
{
    int num,digit;
    printf("Enter value of num: ");
    scanf("%d",&num);
    printf("Enter value of digit: ");
    scanf("%d",&digit);
    occurence(num,digit);
    getch();
}
 void occurence(int num,int digit)
{
    int mod;
    while(num != 0)
    {
      mod = num%10;
      num=num/10;
      if(mod != digit)
      {
         printf("%d ",mod);
      }
    }
}
