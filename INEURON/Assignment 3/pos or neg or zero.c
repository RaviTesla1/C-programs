int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    if(num == 0)
        printf("Zero");
    if(num >0)
        printf("positive");
    if(num<0)
        printf("negative");
    return 0;
}
