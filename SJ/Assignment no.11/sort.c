main()
{
 int a[5],i,j,temp;
 printf("Enter 5 numbers");
 for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
for(i=0;i<=4;i++)
{

    for(j=i+1;j<=4;j++)
    {
        temp=a[0];
      if(temp > a[j])
        a[0]=a[i];
      a[i]=temp;

    }
}
for(j=0;j<=4;j++)
printf("%d ",a[j]);

 getch();
}
