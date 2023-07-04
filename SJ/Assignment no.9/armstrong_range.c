main()
{
    armstrong_range();
    getch();
}
armstrong_range()
{
        int n,r,sum,x;
        for(n=1;n<=1000;n++)
            x=n;
            sum=0;
            while(x !=0 )
            {
             r=x%10;
             sum=sum+r*r*r;
             x=x/10;
            }
          if(sum == n)
            printf("%d\n",n);
}


