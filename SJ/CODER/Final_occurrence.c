void occurrence(int num,int digit);
main()
{
    int num,digit;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter digit:  ");
    scanf("%d",&digit);
    occurrence(num,digit);
    getch();
}
void occurrence(int num,int digit)
{
    int mod,Result=0,New_Result=0;
     while(num != 0)
     {
        mod = num%10;
          num = num/10;
          if(mod != digit)
            Result = Result * 10 + mod;
     }
  while(Result != 0)
  {
      mod=Result%10;
      Result=Result/10;
      New_Result=New_Result *10 +mod;
  }
  printf("\nOutput is:  %d",New_Result);
}

