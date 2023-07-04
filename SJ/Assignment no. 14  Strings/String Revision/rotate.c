#include<stdio.h>
void rot(int y[],int l);
int main()
{
    int i,x[10]={20,30,40,50,60,70,80,90,100,10};
    for(i=0;i<10;i++)
        printf("%d ",x[i]);
        printf("\n");
    rot(x,10);
    return 0;
}
void rot(int y[],int l)
{
    int temp,i;
    temp = y[l-1];
    for(i=l-1;i>=1;i--)
    {
        y[i]=y[i-1];

    }
    y[0]=temp;
    printf("Rotated array is :\n");
    for(i=0;i<l;i++)
        printf("%d ",y[i]);
}
