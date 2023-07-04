main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    reverse(num);
    getch();
}
void reverse(int num)
{
    int a;
    if(num<1)
        return;
    a=num%10;
    printf("%d",a);
    reverse(num/10);
}
