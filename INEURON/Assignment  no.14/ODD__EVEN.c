#include<stdio.h>
int main()
{
    int a[10],i,odd=0,even=0;
    printf("Enter ten numbers: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2)
            odd=odd+a[i];
        else
            even=even+a[i];
    }
    printf("sum of odd numbers are : %d\n",odd);
    printf("sum of even numbers are : %d",even);
    return 0;
}
