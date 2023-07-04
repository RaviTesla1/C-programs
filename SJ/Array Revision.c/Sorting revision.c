void rotate(int b[],int l);
int main()
{
    int i,a[10]={88,105,100,10,1,5,751,8,9,23};
     printf("Array is :\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    sort(a,10);
    return 0;
}
void sort(int b[],int l)
{
    int i,j,temp;
    for(i=1;i<l;i++)
        for(j=0;j<l-1;j++)
        {
           if(b[j]>b[j+1])
          {
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
          }
        }
    printf("Sorted array is :\n");
    for(i=0;i<l;i++)
        printf("%d ",b[i]);
}

