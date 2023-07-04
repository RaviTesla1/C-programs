int main()
{
    int a,b,c,d;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d == 0)
        printf("Equal roots");
    else if(d > 0)
        printf("Distinct and real roots");
        else
        printf("complex and real roots");
    return 0;

}
