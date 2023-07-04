#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    r=fact(n);
    printf("Factorial of number is %d",r);
    return 0;
}
int fact(int n)
{
    if(n == 1)
        return 1;
    return fact(n-1)*n;
}
