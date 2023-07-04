#include<conio.h>
#include<stdio.h>
void main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        if(a[i]%2)
         odd=odd+a[i];
        else
          even=even+a[i];
    printf("sum of odd numbers is %d",odd);
    printf("sum of even numbers is %d",even);
    getch();
}
