main()

{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            k=j;
            if(j<=i)
                printf("%d",k);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
