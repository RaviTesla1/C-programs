#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number\n");
    scanf("%d",&n);
    r=sum(n);
    printf("Sum is %d",r);

}
int sum(int n)
{
    if(n == 0)
        return 0;
    return sum(n-1)+n;
}
