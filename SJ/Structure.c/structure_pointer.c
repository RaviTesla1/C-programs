struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(struct book *);
void sortbyprice(struct book *p,int size);
void input(struct book *p);
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    struct book b[5];
    int i;
    printf("Enter data for five books: \n\n");
    for (i=0;i<5;i++)
     input(&b[i]);
    sortbyprice(b,5);
    for(i=0;i<5;i++)
     display(&b[i]);
    getch();
}
void input(struct book *p)
{
    printf("Enter bookid,title,price: \n");
    scanf("%d",&p->bookid);
    fflush(stdin);
    gets(p->title);
    scanf("%f",&p->price);
}
void sortbyprice(struct book *p,int size)
{
    int r,i;
    struct book temp;
    for(r=1;r<size;r++)
        for(i=0;i<size-r;i++)
          if( (p+i)->price > (p+i+1)->price )
          {
            temp=*(p+i);
            *(p+i)=*(p+i+1);
            *(p+i+1)=temp;
          }
}
void display(struct book *b)
{
    printf("\n %d %s %f",b->bookid,b->title,b->price);
}
