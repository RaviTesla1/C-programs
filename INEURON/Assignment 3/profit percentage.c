int main()
{
    int cp ,sp,profit,x,y;
    printf("Enter cp and sp:\n");
    scanf("%d%d",&cp,&sp);
    profit=sp-cp;
    x= profit*100;
    y=x/cp;
    printf("Profit  is : %d ",y);
    return 0;
}
