#include<stdio.h>
int main()
{
    int n[10],i,greatest=0;
    printf("Enter 10 numbers : \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]>=greatest)
            greatest=n[i];
    }
    printf("Greatest no.is %d",greatest);
    return 0;
}
