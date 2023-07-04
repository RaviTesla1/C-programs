int main()
{
    int num,count=0;
    printf("Enter a number: \n ");
    scanf("%d",&num);
    while(num)
    {
        num = num/10;
        count++;
    }
    if(count == 3)
        printf("Number is three digit\n");
    else
        printf("not three digit");
    return 0;
}
