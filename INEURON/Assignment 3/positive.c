#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num <=0)
    printf("%d is non positive",num);
    else
    printf("%d is positive",num);
    return 0;
}
