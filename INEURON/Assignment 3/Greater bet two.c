int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    if(a == b)
        printf("Numbers are equal\n");
    else if (a>b)
        printf("%d is greater",a);
    else
        printf("%d is greater",b);
    return 0;
}
