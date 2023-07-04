#include<conio.h>
#include<stdio.h>
int fact(int);
void main()
{
    int a,x;
    printf("Enter number");
    scanf("%d",&a);
    printf("Factorial is %d",fact(a));
    getch();
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
       fact=fact*i;
       return fact;
}
