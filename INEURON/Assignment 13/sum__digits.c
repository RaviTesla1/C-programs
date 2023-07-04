#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    r=sum(n);
    printf("sum is %d",r);
    return 0;
}
int sum(int n)
{
    if(n==0)
        return 0;
     return sum(n/10)+n%10;
}
