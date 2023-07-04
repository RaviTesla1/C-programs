#include<conio.h>
#include<stdio.h>
void print(int);
void main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    print(a);
    getch();
}
void print(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);

}
