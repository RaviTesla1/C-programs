#include<conio.h>
#include<stdio.h>
float aoc(int);
void main()
{
    int a;
    float x;
    printf("Enter radius");
    scanf("%d",&a);
    x=aoc(a);
    printf("area is %f",x);
    getch();
}
float aoc(int r)
{
    return 3.14*r*r;
}
