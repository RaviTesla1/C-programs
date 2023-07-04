struct book
{
    int bookid;
    char title[20];
    float price;
};
#include<string.h>
#include<stdio.h>
#include<conio.h>
struct book input();
void display(struct book b);
void main()
{
    struct book b1 ={1," Drilling C",323},b2,b3;
    b2.bookid = 2;
    strcpy(b2.title,"java");
    b2.price = 334;
    b3=input();
    printf("\n");
    display(b1);
    display(b2);
    display(b3);
    getch();
}
struct book input()
{
    struct book b;
    printf("Enter bookid,title and price");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return b;
}
 void display(struct book b)
{
    printf("%d %s %f\n",b.bookid,b.title,b.price);
}
