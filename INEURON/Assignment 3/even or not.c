#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%2)
    printf("Not even");
    else 
    printf("Even");
    return 0;
}