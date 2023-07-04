#include<conio.h>
#include<stdio.h>
float circum(int);
void main()
{
    int a;
    float x;
    printf("Enter radius");
    scanf("%d",&a);
    x=circum(a);
    printf("Circumference is %f",x);
    getch();
}
float circum(int r)
{
    return 2*3.14*r;
}
