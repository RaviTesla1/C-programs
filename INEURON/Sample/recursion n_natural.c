#include<stdio.h>
void print (int n)
int main()
{
    print(10);
}
void print (int n)
{
    if(n>0)
    print(n-1);
    printf("%d ",n);
}