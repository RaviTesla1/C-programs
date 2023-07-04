main()
{
    int x;
    printf("Enter number: ");
    scanf("%d",&x);
    even(x);
    getch();
}
void even(int n)
{
    if(n==0)
    return 1;
    printf("%d\n",n*2);
        even(n-1);

}
