#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
    printf("Enter 10 numbers : /n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+i;
    }
    printf("Sum is %d",sum);
    return 0;
}