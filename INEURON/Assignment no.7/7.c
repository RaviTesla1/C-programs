main()

{
    int i,j;
    char k='A';
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=5-i&&j>=3+i)
                printf("%c",k);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
