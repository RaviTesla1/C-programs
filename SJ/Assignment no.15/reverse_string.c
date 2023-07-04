main()
{
    char str[30],temp;
    int l,i;
    printf("Enter a string: \n");
    gets(str);
    l=strlen(str);
    printf("length of string is: %d\n",l);
    char mtr[l];
    for(i=0;i<l;i++)
    {
        mtr[i]= str[l-1-i];
    }
    printf("\n reverse of string is:\n");
    printf("%s",mtr);
    getch();

}
