#include<conio.h>
#include<stdio.h>
void index(int a[],int n);
void main()
{
    int a[5]={2,5,1,44,887};
    index(a,5);
    getch();
}
void index(int a[],int n)
{
    int i,smallest;
    for(i=0;i<=n-1;i++)
    {
        if(a[i]<a[i+1])
            smallest=i;
    }
    printf("%d",smallest);

}
