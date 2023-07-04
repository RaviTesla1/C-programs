#include<conio.h>
#include<stdio.h>
#include"area.c"

main()
{
    int r;
    float x;
    printf("Enter radius: ");
    scanf("%d",&r);
    x=area(r);
    printf("area is %f",x);
    getch();
}
