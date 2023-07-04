main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    capitalize(str);
    getch();
}
void capitalize(char str[])
{
    str[0]=str[0]-32;
    puts(str);
}

