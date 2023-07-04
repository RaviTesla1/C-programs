main()
{
    char str[40];
    int i;
    printf("Enter a string");
    gets(str);
    for(i=0;str[i];i++)
    {
       str[i]=str[i]-32;
        printf("%c",str[i]);
    }
    getch();
}
