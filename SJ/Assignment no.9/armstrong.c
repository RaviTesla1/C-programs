main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    arms(num);
    getch();
}
void arms(int num)
{
    int sum=0,cube=0,x;
        sum=sum+num;
    while(num != 0)
    {
        x=num%10;
        cube=cube+x*x*x;
        num=num/10;
    }
    if(sum == cube)
       printf(" armstrong number");
    else
        printf(" not armstrong number");

}
