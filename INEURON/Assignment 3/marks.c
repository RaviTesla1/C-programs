int main()
{
    int total,a,b,c,d,e;
    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total = a+b+c+d+e;
    if(total >= 333)
        printf("Passed");
    else
        printf("Failed");
    return 0;
}
