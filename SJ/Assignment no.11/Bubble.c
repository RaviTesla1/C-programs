main()
{
    int a[10],r,c,i,temp,d;
    printf("Enter ten elements:");
    for(c=0;c<=9;c++)
    scanf("%d",&a[c]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
          if(a[i]>a[i+1])
          {

           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
          }
    }
    printf("\n");
  for(c=0;c<=9;c++)
    printf("%d ",a[c]);
 getch();
}
