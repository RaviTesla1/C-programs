main()
{
    int num,i;
    for(num=2;num<=100;num++)
    {
        for(i=2;i<=num-1;i++)
        {
            if(num%i==0)
                break;
        }
        if(num>1&&i==num)
            printf("%d\n",num);
    }
    getch();
}
