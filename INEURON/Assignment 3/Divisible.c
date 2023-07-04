#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%5)
    printf("Not divisible");
    else
    printf("Divisible");
    return 0;
}