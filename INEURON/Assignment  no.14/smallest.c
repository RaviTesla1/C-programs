#include<stdio.h>
int main()
{
    int n[10],i,smalltest;
    printf("Enter 10 numbers : \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]<=smalltest)
            smalltest=n[i];
    }
    printf("Smallest no.is %d",smalltest);
    return 0;
}

