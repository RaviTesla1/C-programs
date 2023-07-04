main()
{
    int x,*p;
    p=&x;
    int y,*q;
    q=&y;
    printf("Enter two numbers: \n");
    scanf("%d%d",p,q);
    printf("Sum of %d and =%d is %d",*(p+0),*(q+0),p[0]+q[0]);
    getch();
}
