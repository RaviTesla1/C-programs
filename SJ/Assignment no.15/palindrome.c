main()
{
    char palin[20];
    printf("Enter a string: ");
    gets(palin);
    palindrome(palin);
    getch();
}
void palindrome(char palin[])
{
    int i,l;
    l=strlen(palin);
    for(i=0;i<l/2;i++)
    {
        if(palin[i] != palin[l-1-i])
        {
            printf("not palindrome");
            break;
        }
    }
    if(i == l/2)
        printf("palindrome");
}
