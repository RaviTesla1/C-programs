main()
{
    char b[10];
    printf("Enter string");
    gets(b);
    count(b,10);
    getch();
}
void count(char b[],int size)
{
    int i,counting=0;
    for(i=0;b[i];i++)
    {
        counting++;
    }
    printf("Number of words are %d",counting);
}
