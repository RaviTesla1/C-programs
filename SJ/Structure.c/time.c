struct time
{
    int date,month,year;
};
main()
{
    struct time today;
    today.date=21;
    today.month=4;
    today.year=2022;
    printf("%d\\%d\\%d",today.date,today.month,today.year);
    getch();
}
