int main()
{
    int num,sum=0,m;
    printf("Enter a number: \n");
    scanf("%d",&num);
    while(num)
    {
        m=num%10;
        sum= sum+m;
        num= num/10;
    }
    printf("Sum of digits is %d",sum);
    return 0;


}
