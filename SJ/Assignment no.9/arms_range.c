void arms_range(int F,int L);
main()
{
    int F,L;
    printf("Enter value of F: ");
    scanf("%d",&F);
    printf("\nEnter value of L: ");
    scanf("%d",&L);
    arms_range(F,L);
    getch();
}
void arms_range(int F,int L)
{
    int num,n_num,a,sum=0;
    for(num=F;num<L;num++)
    {
        while(num != 0)
        {
            a=num%10;
            sum= sum+ a*a*a;
            num=num/10;
        }
        if(F == sum)
            printf("%d ",F);
    }
}
