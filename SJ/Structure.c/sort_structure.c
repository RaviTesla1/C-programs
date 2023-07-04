#include<string.h>
#include<stdio.h>
#include<conio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(struct book b);
void sort(struct book *p,int size);
void input(struct book b);
void main()
{
    struct book b[5];
    int i;
    printf("Enter data of five books: \n");
    for(i=1;i<5;i++)
     input(b[i]);
  sort(b,5);
    for(i=0;i<5;i++)
      display(b[i]);
getch();
}
void input(struct book b)
{
    printf("\nEnter bookid,title and price: \n");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
}
void sort(struct book *p,int size)
{
    struct book temp;
    int r,i;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-r;i++)
        {
            if( (p+i)-> price  > (p+i+1)-> price )
             {
               temp= *(p+i);
               *(p+i)=*(p+i+1);
               *(p+i+1)=temp;
             }
        }
    }
}
void display(struct book b)
{
     printf("\n%d %s %f",b.bookid,b.title,b.price);
}
