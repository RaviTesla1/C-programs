#include<stdio.h>
int main()
{
    int r,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    r=sum(n);
    printf("Sum is %d",r);

}
int sum(int n)
{
    if(n == 1)
        return 1;
    return sum(n-1)+n*2-1;
}
