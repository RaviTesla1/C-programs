int main()
{
    int a[10],res;
    input(a,10);
    res=small(a,10);
    display(a,10);
    printf("Smallest index is : %d ",res);
    return 0;
    getch();

}
void input(int b[],int size)
{
    int i;
    printf("Enter 10 Elements : \n");
    for(i=0;i<10;i++)
      scanf("%d",&b[i]);
}
void display(int c[],int size)
{
    int i;
    for(i=0;i<10;i++)
      printf("%d ",c[i]);
}
int small (int d[],int size)
{
    int i,small_index;
    for(i=1;i<10;i++)
    {

       if(small_index < d[i])

            small_index=0;
        else
            small_index = i;

    }
}
