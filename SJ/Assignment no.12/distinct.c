main()
{
    int i,a[5],b[5];
    printf("Enter Elements of a array: \n");
    for(i=0;i<5;i++)
        scanf("%d",a[i]);
        for(i=0;i<5;i++)
            if(a[i] == a[i+1])
            {
                b[i]=a[i+1];
            }
    for(i=0;i<5;i++)
        printf("%d",a[i]);
getch();
        }
