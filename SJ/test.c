#include<conio.h>
#include<stdio.h>
#include"functions.c"
float area(int)
main()
{
    int r;
    float x;
    printf("Enter radius");
    scanf("%d",&r);
    x=area(r);
    printf("area is %f",x);
    getch();
}
