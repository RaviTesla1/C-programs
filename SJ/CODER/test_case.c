main()
{
    char str[40],i;
    printf("Enter your name:");
    for(i=0;i<=39;i++)
    {
        str[i]=getche();
        if(str[i]==13)
            break;
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]==32);
        else
            i--;
    }
    str[i]='\0';
    printf("\n%s",str);
    getche();
}
