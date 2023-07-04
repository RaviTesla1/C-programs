
#include<conio.h>
#include<stdio.h>
void sort();
main()
{
    sort();
    getch();
}
void sort()
{
    int  n,a[n],r,i,temp;
    printf("Enter size of array");
    scanf("%d",&a[n]);
    printf("Enter array elements");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(r=1;r<=4;r++)
        for(i=0;i<n-r;i++)

           if(a[i]>a[i+1])
           {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
           }
for(i=0;i<n;i++)
 printf("%d ",a[i]);
}
