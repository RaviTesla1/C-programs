#include<stdio.h>
#include<conio.h>S
int main()
{
    int a[10],i,j,temp;
    printf("Enter 10 elements\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(j=1;j<10;j++)
        for(i=0;i<9;i++)
          if(a[i] > a[i+1])
          {
           temp=a[i];
           a[i] = a[i+1];
           a[i+1] = temp;
          }
    printf("\nSorted Elements are : ");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    getch();
}
