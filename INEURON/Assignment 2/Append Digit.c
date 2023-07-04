int main()
{
    int num,digit;
    printf("Enter a number and digit : \n");
    scanf("%d%d",&num,&digit);
    num = num*10;
    num =num +digit;
    printf("Output is %d",num);
    return 0;
}
