main()
{
    int a[10],max,i;
    printf("Enter ten numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        max=a[0];
       for(i=1;i<=9;i++)
        if(max < a[i])
            max=a[i];

  printf(" Greatest no. is %d",max);
        getch();

}
