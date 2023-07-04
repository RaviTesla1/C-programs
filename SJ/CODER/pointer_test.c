main()
{
    int a[10];
    input(a,10);
    display(a,10);
    getch();
}
void input(int *p,int size)
{
    int i;
    printf("Enter array elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&p[i]);
    }
}
void display(int *p,int size)
{
    int i;
    printf("array elements are:\n");
    for(i=0;i<size;i++)
      printf("%d ",p[i]);
}

