struct book
{
    int bookid;
    char title[20];
    float price;
};
struct book input();
display(struct book b);
#include<string.h>
#include<stdio.h>
void main()
{
    struct book b1 = {1,"Drilling C",450.0},b2,b3;
    b2.bookid=2;
    strcpy(b2.title,"java");
    b2.price=345.0;
    b3=input();
    display(b1);
    display(b2);
    display(b3);
     getch();
}
struct book input()
{
    struct book b;
    printf("Enter bookid,title and price: ");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return b;
}
display(struct book b)
{
        printf("\n%d %s %f",b.bookid,b.title,b.price);

}
