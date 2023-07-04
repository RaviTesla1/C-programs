int main()
{
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    if(year%100)
    {
        if(year%4)
              printf("not leap year");
        else
            printf("Leap year");
    }
    else
    {
     if(year%400)
        printf("not leap year");
         else
            printf("leap year");
    }
         return 0;

}
