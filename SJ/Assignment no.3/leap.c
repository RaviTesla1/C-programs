main()
{
    int year;
    printf("Enter year");
    scanf("%d",&year);
    if(year%100==0)
        if(year%400)
          printf("%d is not leap year",year);
        else
          printf("%d is leap year",year);
    else
      if(year%4)
       printf("%d is not leap year",year);
      else
        printf("%d is leap year",year);
getch();
}
