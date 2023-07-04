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
    int n;
    printf("Enter value of n: \n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int r,temp;
    for(r=1;r<n;r++)
        for(i=0;i<n-r;i++)

           if(a[i]>a[i+1])
           {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
           }
printf("\nSorted elements are:\n");
for(i=0;i<n;i++)
 printf("%d ",a[i]);
}

