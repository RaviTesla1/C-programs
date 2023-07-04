main()
{
    char str[10],mtr[10];
    printf("Enter a string: ");
    gets(str);
    printf("Enter a string: ");
    gets(mtr);
    compare(str,mtr);
    getch();
}
void compare(char str[],char mtr[])
{
    int l,ls,lm,i;
    ls=strlen(str);
    lm=strlen(mtr);
    l=(ls >= lm?ls:lm);
    for(i=0;i<l;i++)
    {
        if(str[i] != mtr[i])
        {
            printf("\nStrings are not equal");
            break;
        }
    }
    if(i == l)
        printf("\nStrings are equal");
}
