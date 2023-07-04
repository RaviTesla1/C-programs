main()
{
    char str[20],character;
    int count=0,i;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c",&character);
    for(i=0;str[i];i++)
    {
        if(character == str[i])
            count++;
    }
    printf("\nOccurence is %d",count);
    getch();

}
