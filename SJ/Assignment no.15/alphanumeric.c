main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    alphanumeric(str);
    getch();
}
void alphanumeric(char str[])
{
    int i,l,count=0;
    l=strlen(str);
    for(i=0;str[i];i++)
    {
        if(str[i] >= 'A'&&str[i] <='Z' || str[i] >= 'a'&&str[i] <='z'|| str[i] >='0'&&str[i] <= '9')
        {
            count++;

        }

    }
    if(count < l)
        printf(" not alphanumeric");
    else
        printf("alphanumeric");
}

