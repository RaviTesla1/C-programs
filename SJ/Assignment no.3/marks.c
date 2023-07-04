main()
{
    int sum,english,punjabi,hindi;
    printf("Enter marks in English");
    scanf("%d",english);
    if(english<=33)
        printf("Fail with %d",english);
    else
        printf("pass with %d",english);
printf("Enter marks in punjabi");
scanf("%d",punjabi);
    if(punjabi<=33)
        printf("Fail");
    else
        printf("pass");
    printf("Enter marks in hindi");
    scanf("%d",hindi);
    if(hindi<=33)
        printf("Fail");
    else
        printf("pass");

getch();
}
