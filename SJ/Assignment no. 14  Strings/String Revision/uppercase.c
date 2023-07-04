int main()
{
    char x[10];
    int i;
    printf("Enter your name\n");
    gets(x);
    for(i=0;x[i];i++)
    {
        if(x[i] >= 'A'&&x[i] <= 'Z');

         else
            x[i]-32;

    }
    printf("\n");
    puts(x);
    return 0;

}
