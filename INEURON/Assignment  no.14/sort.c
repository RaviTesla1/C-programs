#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter 10 numbers : \n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}
