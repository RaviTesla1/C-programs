main()
{
    char str[8][5];
    int i,j,count=0;
    for(i=0;i<8;i++)
    {
      printf("\nEnter name: ");
      gets(str);
      puts(str);
    }
    for(i=0;i<8;i++)
     for(j=0;str[i][j];j++)
    {
        if(str[i][j] == 'a'||'i'||'e'||'o'||'u')
            count++;
    }
    printf("\nNumber of vowels are %d",count);
getch();
}
