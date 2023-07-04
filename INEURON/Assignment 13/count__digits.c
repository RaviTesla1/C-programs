#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    r=count(n);
    printf("Number of Digits are %d",r);
    return 0;
}
int count(int x)
{
    if(x == 0)
        return;
   return count(x/10)+1;
}
