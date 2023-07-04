main()
{
    int num;
    printf("Enter number");
    scanf("%d,&num");
    if(num
       %5)
        printf("Not divisible");
    else
        printf("Divisible");
    getch();
}
