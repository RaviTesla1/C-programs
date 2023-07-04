main()
{
    int number;
    printf("Enter number");
    scanf("%d",&number);
    if(prime(number))
      printf("prime no.");
    else
        printf("not prime");
getch();
}
int prime(int num)
{
    int i;
    for(i=2;i<=num-1;i++)
        if(num%i==0)
        break;
    if(i==num)
        return 1;
    return 0;
}
