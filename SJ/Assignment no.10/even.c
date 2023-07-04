main()
{
    even(4);
    getch();
}
void even(int n)
{
    if(n>=2)
        even(n-1);
    printf("%d ",2*n);
}
