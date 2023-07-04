#include<conio.h>
#include<stdio.h>
void even(int n);
void main()
 {
    int a;
    printf("Enter number");
    scanf("%d",&a);
    even(a);
    getch();
 }
void even(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d\n",i*2);
}
