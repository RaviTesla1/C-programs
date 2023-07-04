int main()
{
    int a,b,temp;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    temp =a;
    a= b;
    b= temp;
    printf("a is %d and b is %d",a,b);
    return 0;
}
