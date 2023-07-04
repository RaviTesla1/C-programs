#include<conio.h>
#include<stdio.h>
void rever(int n);
 void main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    rever(n);
    getch();
}
void rever(int n)
{
    if(n>=1)
    {

        printf("%d\n",&n);
        rever(n-1);
    }
}
