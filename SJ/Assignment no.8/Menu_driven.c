main()
{
    int x,a,b,c;
    while(1)
    {
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.division\n");
    printf("5.Exit\n\n");
    printf("Enter your number");
    scanf("%d",&x);
     switch(x)
     {
    case 1:
        printf("Enter two numbers");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("sum is %d",c);
        break;
    case 3:exit(0);
        break;
      case 2:
        printf("Enter two numbers");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("sub is %d",c);
        break;
     }
    }
    getch();
}
