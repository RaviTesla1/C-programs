void count(char str[],char charact);
main()
{
    char str[20];
    char charact;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c",&charact);
    count(str,charact);
    getch();
}
void count(char str[],char charact)
{
    int i,count=0;
    for(i=0;str[i];i++)
    {
        if(str[i] == charact)
        {
            count++;
        }
    }
    printf("number of characters are %d",count);

}
