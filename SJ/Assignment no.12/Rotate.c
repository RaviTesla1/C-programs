#include<conio.h>
#include<stdio.h>
void rotate(int a[],int n);
main()
{
    int a[10],i;
    printf("Enter 10 elements");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    rotate(a,10);
    getch();
}
void rotate(int a[],int n)
{
    int temp,i;
    temp=a[n-1];
    for(i=n-1;i>=1;i--)
        a[i]=a[i-1];
    a[0]=temp;
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
}

