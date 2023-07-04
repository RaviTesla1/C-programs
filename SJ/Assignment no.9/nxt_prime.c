main()
{
    int number,x;
    printf("Enter number");
    scanf("%d",&number);
   x= nxt_prime(number);
   printf("next prime is %d",x);
   getch();
}
 nxt_prime(int num)
{
    int i;
    for(num=num+1;num<=num+10;num++)
    {
        for(i=2;i<=num-1;i++)
        {
            if(num%i==0)
                break;
        }
            if(i==num)
                return num;
    }
}
