main()
{
    char str[15]="my name is khan";
    reverse(str);
    getch();
}
void reverse(char str[])
{
    char mtr[20];
    int l,i;
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        mtr[i] == str[l-1-i];
    }
    puts(mtr);
}
