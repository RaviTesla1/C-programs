#include<conio.h>
#include<stdio.h>
void reverse(int a[],int n);
main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    reverse(a,10);
    getch();
}
void reverse(int a[],int n)
{
    int i,temp,s=0+n;
    for(i=0;i<=n/2;i++)
    {
        temp=a[i];
        a[i]=a[s-1];
        a[s-1]=temp;
        s--;
    }
   for(i=0;i<n;i++)
     printf("%d ",a[i]);
}
