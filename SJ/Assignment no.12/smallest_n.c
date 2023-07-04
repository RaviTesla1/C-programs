main()
{
    smallest();
    getch();
}
void smallest()
{
    int n;
    printf("Enter value of n: \n");
    scanf("%d",&n);
    int a[n],i,d,smallest;
    printf("Enter elements of array: \n");
    for(i=0;i<n;i++)
        scanf("%d",a[i]);
    temp=a[0];
    for(i=1;i<n;i++)
      if(smallest > a[i])
      {
          smallest=a[i] && d=i;
      }
printf("smallest index is %d",d);
}
