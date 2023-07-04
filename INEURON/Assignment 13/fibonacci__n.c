#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d"&n);
    fibo(n);
    return 0;
}
void fibo(int n)
{
    int a=-1,b=1,c;
    if(n == 0)
        return;
    c=a+b;
    printf("%d",c);
      a=b;
      b=c;
      fibo(n-1)
}
