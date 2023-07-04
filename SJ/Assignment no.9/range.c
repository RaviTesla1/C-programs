 main()
 {
     int f,l;
     printf("Enter starting point:");
     scanf("%d",&f);
     printf("Enter last point:");
     scanf("%d",&l);
     armstrong(f,l);
     getch();
 }
 void armstrong(int f,int l)
{
    int i,sum=0,check,a;
    for(i=f;i<=l;i++)
    {
        check=i;
        while(i!=0)
        {
            a = i%10;
            sum =sum +a*a*a;
            i = i/10;
        }
        if(check == sum)
            printf("Armstrong numbers are%d\n",sum);
    }
}
