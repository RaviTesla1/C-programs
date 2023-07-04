int main()
{
    int num,m;
    printf("Enter a number: \n");
    scanf("%d",&num);
    m = num%10;
    num =num/10;
    m =m*100;
    num = m+num;
    printf("output is %d",num);
    return 0;

}
