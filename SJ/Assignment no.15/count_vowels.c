
main()
{
    char s[20];
    printf("Enter a string");
    gets(s);
    count(s,20);
    getch();
}
void count(char s[],int size)
{
    int i,count=0,j;
    char v[11]={"aieouAIEOU"};
    for(i=0;s[i];i++)
        for(j=0;v[j];j++)
           if(s[i] == v[j])
            count++;
printf("no. of vowels are %d",count);
}
