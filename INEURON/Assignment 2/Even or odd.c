int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    if(num&1)
        printf("ODD");
    else
        printf("EVEN");
    return 0;
}
