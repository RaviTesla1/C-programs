int sum(int num)
{
    if(num==0)
        return;
   return num%10+sum(num/10);
}
main()
{
    printf("output is %d",sum(5819791));
    getch();
}
