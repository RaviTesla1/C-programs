main()
{
    int num,i=2;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=2;num>1;i++)
    {
       while(num%i==0)
     {
        printf("%d ",i);
        num=num/i;
     }
    }
    getch();
}
