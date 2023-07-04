int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    num = num%10;
    printf("Unit digit is %d",num);
    return 0;
}
